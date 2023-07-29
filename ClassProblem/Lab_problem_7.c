#include <stdio.h>
int main()
{
    int n, i, row, col;
    scanf("%d", &n);
    //need some modification
    for (row = 1; row <= n; row++)
    {
        for(col=n-row;col>0;col--)
            printf(" ");
        int p = 1;
        for (col = 1; col <= row; col++)
        {
            printf("%d ", p);
            p = p * (row - col) / col;
        }
        printf("\n");
    }

    return 0;
}