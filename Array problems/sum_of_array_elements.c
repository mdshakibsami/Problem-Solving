

/* 
3. Write a program in C to find the sum of all elements of the array.
*/


#include<stdio.h>
int main()
{
    int i,n,arr[n],sum=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("num %d = ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("%d\n",sum);

    return 0;
}