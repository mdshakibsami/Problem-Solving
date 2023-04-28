#include <stdio.h>
int main()
{

    int n, r, temp, rev = 0;
    printf("Enter a number to check palindrome or not \n");
    scanf("%d", &n);
    temp = n;
    while (temp > 0)
    {
        r = temp % 10;
        rev = rev * 10 + r;
        temp = temp / 10;
    }
    if (rev == n)
    {
        printf("Yes,%d is a palindrome number", n);
    }
    else
    {
        printf("NO,%d is not a palindrome number", n);
    }
    return 0;
}
