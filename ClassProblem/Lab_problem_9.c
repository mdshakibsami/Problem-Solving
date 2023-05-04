#include<stdio.h>
int main()
{
    int a[2][3],b[2][3],c[2][3],row,col;
    for(row=0;row<2;row++)
    {
        for(col=0;col<3;col++)
        {
            printf("a[%d][%d]=",row,col);
            scanf("%d",&a[row][col]);
        }
    }
        for(row=0;row<2;row++)
    {
        for(col=0;col<3;col++)
        {
            printf("b[%d][%d]=",row,col);
            scanf("%d",&b[row][col]);
        }
    }
    for(row=0;row<2;row++)
    {
        for(col=0;col<3;col++)
        {
            c[row][col]=a[row][col]+b[row][col];
            printf("%d \t",c[row][col]);
        }
        printf("\n");
    }


    return 0;
}