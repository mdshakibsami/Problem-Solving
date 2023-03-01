#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Enter a number");
    scanf("%d",&num);
    int temp =num;
    while(temp>0){
        sum=sum+temp%10;
        temp =temp/10;

    }
    printf("sum = %d",sum);

    return 0;
}