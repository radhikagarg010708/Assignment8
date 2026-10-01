//Write a C program to input two strings, display their lengths using strlen(), and compare them using strcmp(). Display whether the strings are equal or which string comes first lexicographically.
#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[200], s2[200];

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';   /* remove trailing newline */

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';

    printf("\nLength of first string  : %zu\n", strlen(s1));
    printf("Length of second string : %zu\n", strlen(s2));

    int result = strcmp(s1, s2);

    if (result == 0)
        printf("The strings are equal.\n");
    else if (result < 0)
        printf("\"%s\" comes first lexicographically.\n", s1);
    else
        printf("\"%s\" comes first lexicographically.\n", s2);

    return 0;
}