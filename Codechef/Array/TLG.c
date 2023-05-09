#include <stdio.h>
int main()
{
    int i, n, max = 0, flag;
    scanf("%d", &n);
    int player1[n], player2[n], player[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &player1[i], &player2[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (player1[i] > player2[i])
        {
            player[i] = player1[i] - player2[i];
            player1[i] = player1[i] - player2[i];
        }
        else
        {
            player[i] = player2[i] - player1[i];
            player[i] = player2[i] - player1[i];
        }
        if (player[i] > max)
            max = player[i];

        if (player1[i] == max)
            flag = 0;
        else
            flag = 1;
    }
    if(flag)
        printf("%d %d",1,max);
    else
        printf("%d %d",2,max);
    return 0;
}