#include<stdio.h>
#include<string.h>

int main() {

    int dataFrameCount = 0;
    char data[100][100];
    char changedData[100];
    char temp[5];
    int frameLengths[100];
    printf("Enter the no of frames: ");
    scanf("%d", &dataFrameCount);

    for(int i = 0; i < dataFrameCount; i++){
        printf("Frame");
        printf("%d: ", i + 1);
        scanf("%s", data[i]);

        frameLengths[i] = strlen(data[i]);
      
    }

    printf("\n");
    printf("AT THE SENDER\n");
    printf("Data as frames:\n");
    for(int i = 0; i < dataFrameCount; i++){
        
        printf("Frame");
        printf("%d: ", i + 1);
        printf("%d", frameLengths[i]);
        printf("%s", data[i]);
        printf("\n");
    }

    printf("\n");
    printf("Data transmitted: ");
    for(int i = 0; i < dataFrameCount; i++){
        
        
        printf("%d", frameLengths[i] + 1);
        printf("%s", data[i]);

    }

    printf("\n");
    printf("\n");

    printf("AT THE RECEIVER\n");
    printf("data recieved\n");
    printf("Data after removing the count char:");
    for(int i = 0; i < dataFrameCount; i++){

        printf(" %s", data[i]);

    }

    printf("\n");
    printf("\n");
    printf("The data in data frame\n");
    for(int i = 0; i < dataFrameCount; i++){

        printf("Frame");
        printf("%d: ", i + 1);
        printf("%s", data[i]);
        printf("\n");
    }


    return 0;

}
