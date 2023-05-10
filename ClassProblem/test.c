#include <stdio.h>
int main()
{
    int i, j, k, n, x;
    scanf("%d%d", &n, &x);
    char arr[n];
    scanf("%s",arr);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 'R')
            x++;
        else if (arr[i] == 'L')
            x--;
        arr[i] = x;
    }
    arr[n+1]=n;
    for(i=0;i<n+1;i++)
    {
        for(j=0;j<n+1;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<n+1;k++)
                {
                    arr[k]=arr[k+1];
                }
                
                
            }
            n--;
            j--;
        }
    }
    printf("%d",n);
    
    return 0;
}