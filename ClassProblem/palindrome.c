#include<stdio.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int len = strlen(str),flag=0;
    for(int i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-1-i])
        {
            flag=1;
            break;
        }
    }
    if(flag) printf("NO");
    else printf("YES");
}