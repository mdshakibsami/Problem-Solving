#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int flag = 1;

    for (int i = 1; i <=n; i++)
    {
        if (flag)
        {
            int zero=1;
            for (int j = 0; j < i; j++)
            {
              if(zero)
              {
                printf("%d ",0);
                zero=0;
              }
              else
              {
                printf("%d ",1);
                zero=1;
              }
            }
            flag=0;
        }
        else
        {
             int one=1;
            for (int j = 0; j < i; j++)
            {
              if(one)
              {
                printf("%d ",1);
                one=0;
              }
              else
              {
                printf("%d ",0);
                one=1;
              }
            }
            flag=1;
        }
        printf("\n");
    }
}