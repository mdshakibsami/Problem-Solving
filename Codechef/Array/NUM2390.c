#include<stdio.h>
int main()
{
    int testCase,l,i,r;
    scanf("%d",&testCase);
    while (testCase--)
    {
        scanf("%d %d",&l,&r);
        int count=0;
        for(i=l;i<=r;i++)
        {
            i=i*10;
            printf("%d ",i);
//
        }
        
        //printf("%d\n",count);
    }
    


    return 0;
}