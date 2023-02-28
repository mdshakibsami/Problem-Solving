/*
Problem 5
Problem: Write a C Program to find first N Prime Numbers.
Input
Ask user to enter an integer from console.
Output
Output 1st N prime numbers depending on the user’s input.
Sample
Enter N: 5
1st 5 Prime Numbers are: 1,3,5,7, 11


*/

#include<stdio.h>
int main()
{

//======================= using for loop =====================
   int n,go=0,prime=0;
   printf("Enter a number \n");
   scanf("%d",&n);

   for(int i=2;i>=go;i++){
        int count=0;
    for(int j=2;j<i;j++){
        if(i%j==0){
            count=1;
            break;
        }
    }
       if(count==0){
        printf("%d ",i);
        prime++;
       }
       if(prime==n) break;
   }


//==================== using while loop ========================
    /*
int n,num=1;
printf("Enter a number \n");
scanf("%d",&n);



while(n){
    num++;
   int count=0;
    for(int i=2;i<num;i++){
        if(num%i==0){
            count=1;
            break;
        }

    }
    if(count==0){
       printf("%d \n",num);
        n--;
    }

}
*/

//============================================

return 0;
}
