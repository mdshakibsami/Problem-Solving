#include<stdio.h>
int main()
{
    int testCase,bikes,cars;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&bikes,&cars);
        printf("%d\n",(bikes*2+cars*4));


    }

    return 0;
}