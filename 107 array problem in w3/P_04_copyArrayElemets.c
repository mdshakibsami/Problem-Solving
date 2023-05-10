#include <stdio.h>
int main()
{
    int i,n,arr1[n],arr2[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
        arr2[i]=arr1[i];
        printf("%d ",arr2[i]);
    }

    return 0;
}
