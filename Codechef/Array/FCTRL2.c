#include<stdio.h>
int main()
{
    int testCase,n;
    scanf("%d", &testCase);
    while (testCase--)
    {
        int mul=1;
        scanf("%d",&n);
        while(n>0)
        {
            mul =mul*n;
            n--;
        }
        printf("%d\n",mul);
    }

    return 0;
}