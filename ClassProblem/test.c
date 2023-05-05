#include<stdio.h>
int main()
{

    int r1,r2,c1,c2;
    scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
    if(c1==r2)
    {
        int firsM[r1][c1],secondM[r2][c2],mulM[r1][c1],i,j,k,sum=0;
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
                for(k=0;k<r2;k++)
                {
                    sum=sum+firsM[i][k]*secondM[k][j];
                }
                printf("%d  ",sum);               
                sum=0;
            }
            printf("\n");
        }
    }
    else
        printf("multiplication not possible");
    
    return 0;
}