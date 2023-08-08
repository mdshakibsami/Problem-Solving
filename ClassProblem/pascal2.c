#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int row=1;row<=n;row++)
    {
        for(int space=0;space<n-row;space++) printf("  ");
        int p=1;
        for(int col=1;col<=row;col++)
        {
            printf("%5d",p);
            p=p*(row-col)/col;
        }
        printf("\n");
    }
}