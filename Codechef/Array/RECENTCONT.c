#include<stdio.h>
#include<string.h>
int main()
{
    int i,testCase,problem;
    
    scanf("%d", &testCase);
    while (testCase--)
    {
        int st38=0,lt108=0;
        scanf("%d",&problem);
        char code[problem];
        for(i=0;i<problem;i++)
        {
            scanf("%s",code);
            if(code[i]=="START38")
                st38++;
                
            else    
                lt108++;
        }
        printf("%d %d",st38,lt108);
        
    }

    return 0;
}