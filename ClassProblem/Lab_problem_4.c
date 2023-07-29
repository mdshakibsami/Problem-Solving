#include <stdio.h>
#include <string.h>
int main()
{
    int len,palindrome = 1;
    char str[100];
    printf("Enter a text: ");
    scanf("%s", str);      //don't need &
    len = strlen(str);     //return length of a string
    for (int i = 0; i < len/2; ++i)
    {
        if (str[i] != str[len - i - 1])
        {
            palindrome = 0;
            break;
        }
    }
    if (palindrome)
        printf("%s is a palindrome\n", str);
    else
        printf("%s is not a palindrome\n", str);
}