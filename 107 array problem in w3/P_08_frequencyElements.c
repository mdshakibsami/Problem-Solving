#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        int count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[j]=0;
                count++;
            }
        }
        if(arr[i] !=0)
            printf("%d occurs %d times\n", arr[i], count);
    }

    return 0;
}