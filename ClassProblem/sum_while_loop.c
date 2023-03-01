#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Enter a number");
    scanf("%d",&num);
    int temp = num;

    while(temp>0){
        
        sum=sum+temp;
        temp--;
    }
    printf("sum of %d = %d ",num,sum);

    return 0;
}