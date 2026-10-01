//Write a C program to count the frequency of every character in a string. Treat uppercase and lowercase forms of a letter as the same character, and do not display the same character more than once.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char str[1000];
    int freq[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';   /* remove trailing newline */

    /* Count frequency, treating upper and lower case as the same */
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)tolower((unsigned char)str[i]);
        freq[ch]++;
    }

    /* Print each character exactly once, in order of its code */
    printf("\nCharacter frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            if (i == ' ')
                printf("' ' (space) : %d\n", freq[i]);
            else
                printf("'%c' : %d\n", i, freq[i]);
        }
    }

    return 0;
}