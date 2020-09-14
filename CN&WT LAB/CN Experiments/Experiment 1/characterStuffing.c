#include<stdio.h>
#include<string.h>


int main(){
 
    int i=0,count=0,n,j=0;
    char bits[80];
    char stuffing[80];
 
    printf("Enter Data: ");
    scanf("%s",bits);
 
    printf("\n");
    printf("AT SENDER \n");
    printf("%s\n",bits);
    printf("\n");

    printf("Transmission of data after character stuffing\n");
    printf("DLESTX ");

    for(i=0; i<strlen(bits); i++){

        if(bits[i] == 'D' && bits[i+1]== 'L' && bits[i+2] == 'E'){
                printf("DLE");
                    j=j+3;
        }
    
        printf("%c",bits[i]);
        stuffing[j]=bits[i];
        j++;
    }

    printf(" DLEETX\n");
    printf("\n");

    printf("AT THE RECEIVER:");
    
    for(i = 0; i < j; i++){

        if(stuffing[i] == 'D' && stuffing[i] == 'L' && stuffing[i] == 'E'){
                i=i+3;
        }

        printf("%c",stuffing[i]);

    }
    printf("\n");
    return 0;
}
