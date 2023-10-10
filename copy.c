#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>  // for the open() function
#include <unistd.h> // for read(), write() and close() functions


void copyFileIO(){
    FILE *filePoint = fopen("./inFile", "r");
    FILE *writePoint = fopen("./outFile", "w");
    if (filePoint == NULL || writePoint == NULL){
        printf("Err");
        exit(0);
    }
    char databuff[1024];

    while(fgets(databuff, 1024, filePoint) != NULL){
        printf("apples");
        fprintf(writePoint,"%s", databuff);
    }
    fclose(filePoint);
    fclose(writePoint);
}


int main(){
    copyFileIO();
}

