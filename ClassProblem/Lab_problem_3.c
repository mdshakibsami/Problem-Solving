
/*
Problem 3
A palindrome is a number or a string which is similar when read from the front and from the rear.
For  example: 1221 or Oppo etc. Write Program to check whether a Number is a Palindrome or not.
Input
Ask user to enter an integer or string from console.
Output
Output yes or no depending on the user�s input.
Sample
Enter an integer: 1221
Palindrome? Yes

*/

#include<stdio.h>
int main()
{
printf("Enter a number: ");
int n,temp,rev=0;
scanf("%d",&n);
temp = n;
while(temp > 0)
{
    rev = rev*10+temp%10;
    temp = temp/10;
}
if(rev==n) printf("Yes,%d is a palindrome number",n);
else printf("NO,%d is not a palindrome number",n);

return 0;
}



