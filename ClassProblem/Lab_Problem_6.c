#include<stdio.h>
int main()
{

    int n,row,col;
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=row;col<row*2;col++)
            printf("%d ",col);
        for(col=(row-1)*2;col>=row;col--)
            printf("%d ",col);
    printf("\n");
    }
    


    return 0;
}