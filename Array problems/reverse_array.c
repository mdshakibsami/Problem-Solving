

#include<stdio.h>
int main()
{
    int n, i, arr[n];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("num %d = ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}