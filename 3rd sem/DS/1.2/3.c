//reverse string

#include <stdio.h>
#include <string.h>

void reverse(char str[]) {
    int len = strlen(str);
    int i;

    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Reversed string is: ");
    reverse(str);

    return 0;
}
