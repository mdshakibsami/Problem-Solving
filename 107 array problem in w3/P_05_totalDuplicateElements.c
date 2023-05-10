#include <stdio.h>
int main()
{
    int i, n, j, count = 0;
    scanf("%d", &n);
    int arr[n];//noted//
    //shafin is multi...
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {

                count++;
                break;
            }
        }
    }
    printf("%d", count);
    return 0;
}