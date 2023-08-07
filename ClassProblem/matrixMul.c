#include <stdio.h>

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

void multiplication(int a[10][10],int b[10][10],int mul[10][10],int r,int c,int s)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            mul[i][j]=0;
            for(int k=0;k<s;k++)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
}


int main()
{
    int r1, r2, c1, c2;
    printf("Enter first matrix row column: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter secound matrix row column: ");
    scanf("%d%d", &r2, &c2);
    int a[10][10], b[10][10], mul[10][10];
    while (c1 != r2)
    {
        printf("incorrect input\n");
        printf("Enter first matrix row column: ");
        scanf("%d%d", &r1, &c1);
        printf("Enter secound matrix row column: ");
        scanf("%d%d", &r2, &c2);
    }

    printf("Enter first matrix %d elements:",r1*c1);
    getElements(a,r1,c1);
    printf("Enter second matrix %d elements:",r2*c2);
    getElements(b,r2,c2);
    printf("First matrix:\n");
    display(a,r1,c1);
    printf("Second matrix:\n");
    display(b,r2,c2);

    printf("multiplied matrix:\n");
    multiplication(a,b,mul,r1,c2,c1);
    display(mul,r1,c2);


}