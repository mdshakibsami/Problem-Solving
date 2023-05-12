#include <stdio.h>
int fabbonacci()
{
    int n, i, sum = 1, p = 0;
    scanf("%d", &n);
    printf("%d ", 0);
    for (i = 0; i < n; i++)
    {
        printf("%d ", sum);
        sum = sum + p;
        p = sum - p;
    }
}

int main()
{
    fabbonacci();

    return 0;
}