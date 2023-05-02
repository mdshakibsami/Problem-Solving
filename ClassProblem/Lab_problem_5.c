#include<stdio.h>
int main()
{
    int n,i,num=1;
    scanf("%d",&n);
    while(n>0)
    {
       num++;
       int flag=1;
       for(i=2;i<num;i++)
       {
            if(num%i==0)
            {
                flag =0;
                break;
            }
       }
       if(flag)
       {
             printf("%d  ",num);
            n--;
       }
           
    }

    return 0;
}