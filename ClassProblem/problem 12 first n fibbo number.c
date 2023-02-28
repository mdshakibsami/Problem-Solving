/*
Problem 12
Problem: Write a C Program to find the Fibonacci series consisting of n numbers using  recursive function.
Input
Ask user to enter an integer from console.
Output
Output Fibonacci series of n numbers.
Sample
Enter N: 8
Output: 1 1 2 3 5 8 13 21
*/

#include<stdio.h>

int n=1;
void odd(){
  if(n<10){
    printf("%d ",n+1);
    n++;
    even();
  }
  return;
}

void even(){
 if(n<10){

    printf("%d ",n-1);
    n++;
    odd();
 }
}

int main(){

odd();

}
