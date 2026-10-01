//Write a C program to input a sentence and separate it into individual words using strtok(). Display each word on a separate line and count the total number of words.
#include <stdio.h>
#include <string.h>

int main(void) {
    char sentence[300];
    int count = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';   /* remove trailing newline */

    /* Delimiters: space, tab, comma, period, and other common punctuation */
    const char *delims = " \t,.;:!?";

    char *token = strtok(sentence, delims);

    while (token != NULL) {
        count++;
        printf("Word %d: %s\n", count, token);
        token = strtok(NULL, delims);
    }

    printf("\nTotal number of words: %d\n", count);

    return 0;
}