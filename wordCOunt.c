#include <stdio.h>
#include <string.h>

int count_words(char *str) {
    // this function should return the number of words in str
    int wordCount = 0;
    int previousSpace = 0;
    int adjacentWhiteSpace = 0;
    if (str[0] != ' '){
        previousSpace = 1;    
    }
    for (int i = 0; i < strlen(str) -1; i ++){
        
        if (str[i] == ' '){
            if (previousSpace == 0){
                puts("apple");
                previousSpace = 1;
            }

        }
        else {
            if (previousSpace == 1){
                wordCount ++;
                previousSpace = 0;
            }
        }
    }
    return wordCount;
}

int main() {
    char str[100];

    printf("Enter a string:");
    fgets(str, 100, stdin);    // this function reads a line or at most 99 bytes from stdin file stream that represents the keyboard

    printf("Number of words in the entered string is %d\n", count_words(str));

    return 0;

}