/*
Problem 1
Problem: You already know the various operators in C. Take two integers (i1, i2) and two float values
(f1, f2) as input from the user and print the following:
1. Average of floating numbers.
2. Bitwise-OR and Bitwise-AND of integer numbers.
3. Left-shift i1 by 2 places and Right-shift i2 by 1 place and print out the result.
(Note that left shift  multiplies the number by 2 and right shift divides it by 2)
Input
Ask user to enter i1, i2.
Ask user to enter f1, f2.
Sample
Enter i1 and i2: 5 6
Enter f1 and f2: 3.0 8.0
Average of f1 and f2 is: 5.5000
Bitwise-OR and Bitwise-AND of i1 and I2 is: 7 and 4
i1 shifted left by two places: 20 and i2 shifted right by 1 place: 3

*/

#include<stdio.h>
int main()
{
float f1,f2,avg;
printf("enter two floating numbers\n");
scanf("%f%f",&f1,&f2);
avg = (f1+f2)/2;
printf("%f is average of %f and %f\n",avg,f1,f2);

//taking input of two integer number
int i1,i2,c,d;
printf("Enter two integr numbers \n");
scanf("%d%d",&i1,&i2);

//& and | operation
printf("%d | %d = %d\n",i1,i2,i1|i2);
printf("%d & %d = %d\n",i1,i2,i1&i2 );

// right and left shifting
int ls,rs;
ls=i1<<2;
printf("left shift by 2 of %d is : %d\n",i1,ls);
rs = i2>>1;
printf("right shift by 1 of %d is : %d\n",i2,rs);

return 0;

}













