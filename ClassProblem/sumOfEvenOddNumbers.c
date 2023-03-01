#include<stdio.h>
int main(){

    int num,sum=0;
    printf("Enter a number :");
    scanf("%d",&num);
    int temp =num;
   do{ 
        if(temp%2!=0){
            sum+=temp;
        }
        
        temp--;
    }while(temp>0);
    printf("sum of first %dth odd number is : %d ",num,sum);

    return 0;

}