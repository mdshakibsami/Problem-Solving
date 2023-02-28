/*
Problem 11
Problem: Write a C Program to find factorial of a given number using recursion. Input
Ask user to enter an integer from console.
Output
Output factorial depending on the user’s input.
Sample
Enter N: 5
Output: 120
*/

#include<stdio.h>

int fact(int n){

if(n==1) return 1;
else return n*fact(n-1);

}

int main(){

int n;
printf("Enter a number \n");
scanf("%d",&n);
printf("Factorial of %d is %d",n,fact(n));

return 0;
}
