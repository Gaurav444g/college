//concate string

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    // concatenate str1 and str2 safely
    strncat(str1, str2, sizeof(str1) - strlen(str1) - 1);

    printf("Concatenated string is: %s", str1);
    return 0;
}
