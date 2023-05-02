/*

Problem 8
Problem: Write a C Program to show the inverted full pyramid of �*� with N rows as follows.
Use the following functions to do this.

 * * * * * * * * *
 * * * * * * *
 * * * * *
 * * *
 *

Input: Ask user to enter N from console.
Output
Output a Pyramid of numbers like of above depending on the user�s input.


*/


#include<stdio.h>
int main(){

int n;
printf("Enter a number\n");
scanf("%d",&n);
for(int row=n;row>=1;row=row-2){

    for(int col=1;col<=row;col++){

        printf("*");
    }
    printf("\n");

}

return 0;
}
