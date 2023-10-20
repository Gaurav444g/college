//compare two string

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // remove newline character
    str1[strlen(str1) - 1] = '\0';
    str2[strlen(str2) - 1] = '\0';

    int result = strcmp(str1, str2);

    if (result == 0)
        printf("The strings are identical.\n");
    else if (result < 0)
        printf("The first string is less than the second string.\n");
    else
        printf("The first string is greater than the second string.\n");

    return 0;
}
