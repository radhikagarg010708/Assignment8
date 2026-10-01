//Write a C program to input a string and a character. Use strchr() to find the first occurrence of the character. If found, display its position; otherwise, display an appropriate message.
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[200];
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';   /* remove trailing newline */

    printf("Enter a character to search for: ");
    scanf(" %c", &ch);                /* leading space skips leftover whitespace */

    char *ptr = strchr(str, ch);

    if (ptr != NULL)
        printf("'%c' first occurs at position %ld (index, starting from 0).\n"
               "That is position %ld counting from 1.\n",
               ch, (long)(ptr - str), (long)(ptr - str) + 1);
    else
        printf("The character '%c' was not found in the string.\n", ch);

    return 0;
}