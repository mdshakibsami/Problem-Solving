#include <stdio.h>
int main()
{
    ///////////////unsolved
    int i, j, n;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        int flag=0;
        for (j = i + 1; j < n+1; j++)
        {
            if(arr[i]<arr[j])
            flag=1;
            
        }
        if(flag)
            printf("%d ",arr[i]);
    }

    return 0;
}