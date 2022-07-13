#include "cs50.h"
#include <stdio.h>


int main(void) 
{
    int height;
    int newHeight = height;

    do {
        // prompt user for a number between 1 and 8
        height = get_int("Enter a number between 1 and 8\n ");
    } while (height < 1 || height > 8 );

    // loop through height variable
    for (int i = 1; i <= height; i++) {
        // on each row input . number of times 1 minus the height
        for (int j = height - i; j >= 1; j--) {
            printf(".");
        }
        // print block number of i
        for (int j = 1; j <= i; j++) {
            printf("#");
        }
        printf("\n");
    }
    
} 