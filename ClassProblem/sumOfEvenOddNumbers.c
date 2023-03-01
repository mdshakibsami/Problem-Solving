
//first Nth odd numbers summation using while loop

#include<stdio.h>
int main(){

int num,sum=0;
printf("enter a number : ");
scanf("%d",&num);
int temp = num;
while(temp>0){
    if(temp%2!=0){
        sum=sum+temp;
    }
    temp--;
    
}
printf("%d",sum);

return 0;
}


