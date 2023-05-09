#include<stdio.h>
int main()
{
    int i,problem[4],count=0;
    for (i=0;i<4;i++)
    {
        scanf("%d",&problem[i]);
        if(problem[i]>=10)
            count++;
    }
    printf("%d\n",count);
    

    return 0;
}