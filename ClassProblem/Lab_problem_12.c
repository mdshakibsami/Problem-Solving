#include <stdio.h>
int main()
{
    int r1, r2, c1, c2, a[r1][c1], b[r2][c2], c[r1][c2], row, col, k, sum = 0;

    if (r2 == c1)
    {
        for (row = 0; row < 2; row++)
        {
            for (col = 0; col < 3; col++)
            {
                printf("a[%d][%d]=", row, col);
                scanf("%d", &a[2][3]);
            }
        }
        for (row = 0; row < 3; row++)
        {
            for (col = 0; col < 2; col++)
            {
                printf("b[%d][%d]=", row, col);
                scanf("%d", &a[2][3]);
            }
        }

        for (row = 0; row < 2; row++)
        {
            for (col = 0; col < 2; col++)
            {
                for (k = 0; k < 3; k++)
                {
                    sum = sum + a[row][k] * b[k][col];
                }
                c[row][col] = sum;
                sum = 0;
            }
        }

        for (row = 0; row < 2; row++)
        {
            for (col = 0; col < 2; col++)
            {
                printf("%d    ", c[row][col]);
            }
            printf("\n");
        }
    }
    else
        printf("Enter multiplecatin is not possible");

    return 0;
}