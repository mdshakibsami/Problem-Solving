#include<stdio.h>
int main()
{
    int testCase,a,b,c;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a>c && c<b)
            printf("YES\n");
        else if(c>a && a<b)
            printf("YES\n");
        else
            printf("NO\n");


    }

    return 0;
}