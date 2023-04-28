/*
Write a program in C to copy the elements of one array into another array.
*/

/*
3. Write a program in C to find the sum of all elements of the array.
*/

#include <stdio.h>
int main()
{
    int i, n, arr1[n], arr2[n];
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("num %d = ", i + 1);
        scanf("%d", &arr1[i]);
        arr2[i] = arr1[i];
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}