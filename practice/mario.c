#include <cs50.h>
#include <stdio.h>


int main(void) {
    int n;

    // do {
    //     n = get_int("width: ");
    // } 
    // while (n < 1);

    // for (int i = 0; i < n; i++) {
    //     printf("?");
    // }
    // printf("\n");

    do {
        n = get_int("Size: ");
    } while (n < 1);

// for each row
    for (int i = 0; i < n; i++) {
        // for each column
        for (int j = 0; j < n; j++) {
            // print a brick
            printf("#");
        }
        // move to next row
        printf("\n");
    }

    // go to next line
    printf("\n");
}