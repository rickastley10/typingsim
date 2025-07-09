#include <stdio.h>    // For printf and scanf
#include <string.h>   // For strcmp
#include <stdlib.h>   // For exit

int main() {
    printf("a simple game\n");
    printf("the best game in the world!!!\n");
    printf("a TYPING SIMULATOR!!!!\n");
    int points = 0;
    
    while (1) {
        printf("\n\n\n type ANYTHING \n(remember to find all the letter comboes like abcd)\ntype [exit] to quit\n\n");
        
        char anything[100]; // Buffer for user input
        scanf("%99s", anything);
        
        printf("you typed: %s", anything);
        points = points + 1;
        printf("\n you have ");
        printf("%d", points);
        printf(" points\n");
        
        if (strcmp(anything, "abcd") == 0) {
            printf("WOW, a whole abcd combo!!!");
            printf("+10 points");
            points = points + 10;
        }
        else if (strcmp(anything, "wxyz") == 0) {
            printf("WOW, a whole wxyz combo!!!");
            printf("+10 points");
            points = points + 10;
        }
        else if (strcmp(anything, "qwertyuiop") == 0) {
            printf("WOW, a whole qwertyuiop combo!!!");
            printf("+30 points");
            points = points + 30;
        }
        else if (strcmp(anything, "abcd") == 0) {  // Note: This is unreachable
            printf("WOW, a whole abcd combo!!!");
            printf("+10 points");
            points = points + 10;
        }
        else if (strcmp(anything, "wasd") == 0) {
            printf("\nWOW, a whole wasd combo!!!");
            printf("+10 points\n");
            points = points + 10;
        }
        else if (strcmp(anything, "exit") == 0) {
            exit(1);
        }
    }
    
    return 0;
}