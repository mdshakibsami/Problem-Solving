#include<stdio.h>
int main()
{

    int r1,r2,c1,c2;
    scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
    if(r1==r2 && c1==c2)
    {
        int firsM[r1][c1],secondM[r2][c2],sumM[r1][c1],i,j;
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("firstM[%d][%d]= ",i,j);
                scanf("%d",&firsM[i][j]);
            }
        }

        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("secondM[%d][%d]= ",i,j);
                scanf("%d",&secondM[i][j]);
            }
        }

        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                sumM[i][j]=firsM[i][j]+secondM[i][j];
                printf("%d  ",sumM[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("addition not possible");
    
    return 0;
}