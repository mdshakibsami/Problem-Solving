/*
Problem 4
A palindrome is a number or a string which is similar when read from the front and from the
rear. For  example: 1221 or Oppo etc. Write Program to check whether a String is a Palindrome or not.
Input
Ask user to enter an integer or string from console.
Output
Output yes or no depending on the user’s input.
Sample
Enter a String: madamimadam
*/

#include<stdio.h>
int main(){
printf("Enter any word to check palindrome or not \n");

char text[30],text2[30];
scanf("%s",&text);
strcpy(text2,text);
strrev(text2);
/*
int a = strcmp(text,text2);
if text == text2 it returns 0
printf("%d",a);
*/
if(!strcmp(text,text2)){
    printf("Yes,%s is a palindrome",text);
}else{
printf("No,%s is not a palindrome",text);
}

return 0;}
