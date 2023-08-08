#include <stdio.h>
int main()
{
    int n, i, row, col;
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for(int i=0;i<n-row;i++)
            printf("   ");
        int p = 1;
        for (col = 1; col <= row; col++)
        {
            printf("%5d ", p);
            p = p * (row - col) / col;
        }
        printf("\n");
    }

    return 0;
}