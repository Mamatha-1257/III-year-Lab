package com.db;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.Scanner;

public class ConnectionDb {

	public static void main(String[] args){
		String URL = "jdbc:mysql://localhost:3306/webprogramming";
		String user =  "root";
		String pass = "1234";
		int n;
		int id;
		String name;
		int age;

		Scanner sc = new Scanner(System.in);

		try{
			Class.forName("com.mysql.jdbc.Driver");
			Connection con = DriverManager.getConnection(URL, user, pass);

			System.out.println("Connnection established...");
			Statement stat = con.createStatement();
			
			PreparedStatement pst = con.prepareStatement("insert into employee values(?,?,?)");
			System.out.println("Enter no of records to be entered");
			n = sc.nextInt();

			int count = 0;
			for(int i = 0; i < n; i++){
				System.out.println("Enter id");
				id = sc.nextInt();
				System.out.println("Enter name");
				name = sc.next();
				System.out.println("Enter age");
				age = sc.nextInt();
				pst.setInt(1, id);
				pst.setString(2, name);
				pst.setInt(3, age);
				count = count + pst.executeUpdate();
			}	

			ResultSet rs = stat.executeQuery("select * from employee");

			int j = 0;
			while(rs.next()) {
				System.out.println("Employee:" + (j++ + 1));
				System.out.println(rs.getInt(1));
				System.out.println(rs.getString(2));
				System.out.println(rs.getInt(3));
				System.out.println("\n");
			}
			con.close();
		}
		catch(Exception e) {
			System.out.println(e);
		}

	}
}

