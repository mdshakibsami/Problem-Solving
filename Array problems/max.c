#include<stdio.h>
int main()
{
    int i,n,arr[n];
    printf("Enter the array size ");
    scanf("%d",&n);
    for( i=0;i<n;i++)
    {
        printf("Input %d = ",i+1);
        scanf("%d",&arr[i]);
    }
     int max=arr[0];
    
    for(i=0;i<n;i++)
    {
       
        if(max<arr[i])
        {
            max=arr[i];
        }
    
    }

    printf("%d is the max value",max);

    return 0;
}