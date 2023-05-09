#include <stdio.h>
int main()
{
    int n, i, count;
    char code[] = "codeforces", str[11];
    scanf("%d", &n);
    while (n--)
    {
        for (i = 0; i <= 9; i++)
        {
            scanf("%c", &str[i]);

        }
        count = 0;
        for (i = 0; i <= 9; i++)
        {
            if (str[i] != code[i])
            {
                printf("hi\n");
            }
        }
        printf("%d", count);
    }
}