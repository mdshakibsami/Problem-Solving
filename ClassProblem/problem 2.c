
/*
Problem 2
Problem: You are given a three-digit decimal integer. Print out the sum of its three digits.  Input: Ask user to enter an integer from console.
Output: Output the sum of individual digits of the number.
Sample
Enter a three-digit integer: 786
Sum of the digits of the number is: 21
*/

#include<stdio.h>
int main(){


int a,sum=0;
printf("Enter a number to see the sum of individual number\n");
scanf("%d",&a);
int temp = a;

while(temp>0){

    int r = temp%10;
    sum += r;
    temp = temp/10;

}

printf("sum of %d is: %d",a,sum);

}
