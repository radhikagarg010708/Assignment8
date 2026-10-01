//Write a C program to determine whether a given string is a palindrome. Ignore differences between uppercase and lowercase letters. For example, Madam should be treated as a palindrome.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i = 0, j, palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find the length of the string
    while (str[i] != '\0' && str[i] != '\n') {
        i++;
    }

    j = i - 1;

    // Compare characters from both ends
    i = 0;
    while (i < j) {
        if (tolower(str[i]) != tolower(str[j])) {
            palindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (palindrome == 1)
        printf("The string is a palindrome.");
    else
        printf("The string is not a palindrome.");

    return 0;
}
