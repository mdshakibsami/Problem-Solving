#include <stdio.h>
int main()
{
    int n,i,num[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        scanf("%d",&num[i]);
        num[n-1-i]=num[i];
        printf("%d ",num[i]);
    }
   
}
