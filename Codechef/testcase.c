#include<stdio.h>
int main()
{
    int testCase;
    scanf("%d",&testCase);
    while (testCase--)
    {
        scanf("%d",&x);
        if(x>=80)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    

    return 0;
}