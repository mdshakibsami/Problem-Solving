

#include<stdio.h>
int main(){
int n,count;
printf("Enter a number\n");
scanf("%d",&n);

if(n==0||n==1) count =1;

for(int i=2;i<n;i++){

    if(n%i==0){
        count++;
        break;
    }
}
if(count==0) printf("%d is a prime number",n);
return 0;
}














