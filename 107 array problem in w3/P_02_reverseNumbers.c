#include <stdio.h>
int main()
{
    int n,i,num[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    for(i=n-1;i>=0;i--)
    //noteded//
        printf("%d",num[i]);    
}
