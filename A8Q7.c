//Write a C program to input a first name and a last name. Use strcpy() and strcat() to create and display the complete name with a space between the two names.
#include <stdio.h>
#include <string.h>

int main(void) {
    char first[50], last[50], full[110];

    printf("Enter first name: ");
    scanf("%49s", first);

    printf("Enter last name: ");
    scanf("%49s", last);

    strcpy(full, first);
    strcat(full, " ");
    strcat(full, last);

    printf("\nComplete name: %s\n", full);

    return 0;
}