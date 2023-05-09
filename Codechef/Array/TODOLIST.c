#include<stdio.h>
int main()
{
    int testCase, problems, i, count;
    scanf("%d", &testCase);
    while (testCase--)
    {

        count = 0;
        scanf("%d",&problems);
         int difficulty[problems];
         // better to declear a arry after knowing the size
        for (i = 0; i < problems; i++)
        {
            scanf("%d", &difficulty[i]);
            if (difficulty[i] >= 1000)
                count++;
        }
        printf("%d\n", count);
    }

    return 0;
}