//Write a C program to input a sentence and a word. Use strstr() to determine whether the word occurs in the sentence. If found, display the starting position of its first occurrence.
#include <stdio.h>
#include <string.h>

int main(void) {
    char sentence[300], word[50];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';   /* remove trailing newline */

    printf("Enter a word to search for: ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';

    char *ptr = strstr(sentence, word);

    if (ptr != NULL)
        printf("\"%s\" found. It starts at index %ld (position %ld counting from 1).\n",
               word, (long)(ptr - sentence), (long)(ptr - sentence) + 1);
    else
        printf("\"%s\" was not found in the sentence.\n", word);

    return 0;
}