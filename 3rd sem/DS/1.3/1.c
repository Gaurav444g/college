//matrix addition

#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j;

    printf("Enter the dimensions of the first matrix:\n");
    scanf("%d %d", &r1, &c1);

    printf("Enter the dimensions of the second matrix:\n");
    scanf("%d %d", &r2, &c2);

    // check if addition is possible
    if (r1 != r2 || c1 != c2) {
        printf("The matrices cannot be added.\n");
        return 0;
    }

    int a[10][10], b[10][10], sum[10][10];

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    // calculate the sum of the two matrices
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("The sum of the two matrices is:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++)
            printf("%d ", sum[i][j]);

        printf("\n");
    }

    return 0;
}
