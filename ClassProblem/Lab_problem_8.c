
#include<stdio.h>
int main()
{
    
int n,row,col;
printf("Enter a number\n");
scanf("%d",&n);
for(row=n;row>0;row--)
{
   for(col=n-row;col>0;col--)
            printf(" ");
    for(col=(row*2)-1;col>0;col--)
    {
        printf("*");
    }
    printf("\n");

}
return 0;
}
