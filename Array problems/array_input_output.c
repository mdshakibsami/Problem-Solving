// Write a program in C to store elements in an array and print them.


#include <stdio.h>
int main()
{
    int i, n,arr[n];
    scanf("%d",&n);

    for (i = 0; i < 10; i++)
    {
        printf("num %d =", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}