#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    string s = get_string("Before: ");
    printf("After:  ");

    // Regular Way To Check If Character Is Lowercase Or Uppercase And Change 
    // for (int i = 0, n = strlen(s); i < n; i++) {
    //     if (s[i] >= 'a' && s[i] <= 'z') {
    //         printf("%c", s[i] - 32);
    //     } else {
    //         printf("%c", s[i]);
    //     }
    // }

    // Using islower helper function
    // for (int i = 0, n = strlen(s); i < n; i++) {
    //     if (islower(s[i])) {
    //         printf("%c", s[i] - 32);
    //     } else {
    //         printf("%c", s[i]);
    //     }
    // }

    // Using toupper helper function
    for (int i = 0, n = strlen(s); i < n; i++) {
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}