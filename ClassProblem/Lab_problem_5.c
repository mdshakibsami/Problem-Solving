#include <stdio.h>
int main()
{
    int num = 1, n;
    scanf("%d", &n);
    while (n > 0)
    {
        num++;
        int flag=1;
        for (int i = 2; i < num; ++i)
        {
            if (num % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            printf("%d ", num);
            n--;
        }
    }
    return 0;
}