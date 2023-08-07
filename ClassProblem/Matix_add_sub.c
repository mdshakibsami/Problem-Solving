#include<stdio.h>

void getElements(int a[10][10],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            int x;
            scanf("%d",&x);
            a[i][j]=x;
        }
    }
}

void display(int a[10][10],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
       printf("\n");
    }
}

void add(int a[10][10], int b[10][10], int add[10][10],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            add[i][j]=a[i][j]+b[i][j];
        }
    }
}
void sub(int a[10][10], int b[10][10], int sub[10][10],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            sub[i][j]=a[i][j]-b[i][j];
        }
    }
}

int main()
{
    int row,col;
    printf("Enter row and column: ");
    scanf("%d%d",&row,&col);

    int a[10][10], b[10][10] ,sum[10][10] ,dif[10][10];
    printf("Enter the first matrix elements:");
    getElements(a,row,col);
    printf("Enter the second matrix elements:");
    getElements(b,row,col);

    //add and sub
    add(a,b,sum,row,col);
    sub(a,b,dif,row,col);
    //******************

    printf("first matrix:\n");
    display(a,row,col);
    printf("first matrix:\n");
    display(b,row,col);
    printf("added matrix:\n");
    display(sum,row,col);
    printf("subtracted matrix:\n");
    display(dif,row,col);

}