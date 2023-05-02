#include <stdio.h>
#include <string.h>
int main()
{
    int len,i,flag=0;
    char str[100];
    scanf("%s",str);
    len = strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]!=str[len-i-1])
        {
            flag=1;
            break;
        }
        
    }
    if(flag)
    printf("%s is a not palindrome\n",str);
    else
    printf("%s is  a palindrome",str);

    return 0;
}