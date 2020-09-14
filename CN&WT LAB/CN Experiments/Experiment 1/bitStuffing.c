#include<stdio.h>
#include<string.h>

int main() {

    int i=0, j=0, k, d;
    char inp[50];
    char out[50];

    printf("Enter the data:");
    scanf("%s",inp);


    for(i = 0;i < strlen(inp);i++) {
        if(inp[i] == '1'){
            j++;
        }
        else{
            j = 0;
            if(j == 5) {
                for(k = strlen(inp); k > i; k--) {
                    inp[k + 1] = inp[k];
                }
                inp[i+1]='0';
            }
        }
    }

    printf("\n");
    printf("After stuffing while transmiting: \n");
    printf("01111110 ");
    printf("%s",inp);
    printf(" 01111110");
    printf("\n");


    int index = 0;
    for(index = 0; index < strlen(inp); index++) {
        out[index] = inp[index]; 
    }

    for(i = 0;i < strlen(out); i++) {
        if(out[i] == '1') {
            j++;
        }
        else{
            j=0;
            if(j == 5) {
                i = i + 1;
                for(k = i;k < strlen(out); k++){
                    out[k] = out[k + 1];
                    out[k] = '\0';
                    i = i - 1;
                }
            }
        }
    }
    printf("\nAt the receiver side:\n");
    printf("%s", out);
    printf("\n");
    return 0;
}
