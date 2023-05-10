#include <stdio.h>
int main()
{
    int i,n,num[n],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    printf("%d",sum);
}
