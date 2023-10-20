//substring

#include <stdio.h>
#include <string.h>

void find_substring(char str[], char sub[]) {
    int count = 0, flag = 0;
    int i, j;

    for (i = 0; str[i] != '\0'; i++) {
        flag = 0;
        count = 0;
        for (j = i; str[j] != '\0' && sub[count] != '\0'; j++) {
            if (str[j] == sub[count]) {
                flag = 1;
                count++;
            } else {
                flag = 0;
                break;
            }
        }

        if (flag == 1 && sub[count] == '\0') {
            printf("Substring found at index %d\n", i);
        }
    }
}

int main() {
    char str[100], sub[100];

    printf("Enter the main string: ");
    gets(str);

    printf("Enter the substring to search for: ");
    gets(sub);

    find_substring(str, sub);

    return 0;
}
