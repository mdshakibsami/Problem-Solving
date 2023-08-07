#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        for(int space=0;space<n-i;space++) printf("  ");
        for(int j=0;j<i*2-1;j++)
        {
            printf("$ ");
        }
        printf("\n");
    }
}