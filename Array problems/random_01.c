#include<stdio.h>
int main()
{
    int n,i,arr[n];
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(arr[i]<35) printf("%d\n",i);
    }


    return 0;
}