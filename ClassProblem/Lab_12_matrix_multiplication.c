#include<stdio.h>
int main()
{
    int a[2][3],b[3][3],c[2][3],row,col,sum=0;
    for(row=0;row<2;row++)
    {
        for(col=0;col<3;col++)
        {
            printf("a[%d][%d]=",row,col);
            scanf("%d",&a[row][col]);
        }
    }
        for(row=0;row<3;row++)
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
            for(int k=0;k<3;k++)
            {
                sum=sum+a[row][k]*b[k][col];

            }
            c[row][col]=sum;
            sum=0;
        }

    }


            for(row=0;row<2;row++)
    {
        for(col=0;col<3;col++)
        {

            printf("%d\t",c[row][col]);
        }
        printf("\n");
    }


    return 0;
}
