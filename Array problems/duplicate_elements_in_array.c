#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], i, j, count = 0;

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
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
    printf("%d are duplicate\n", count);

    return 0;
}