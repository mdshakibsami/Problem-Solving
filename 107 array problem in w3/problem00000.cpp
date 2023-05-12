#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n, t, time;
    
    scanf("%d", &t);
    while (t--)
    {
       
        scanf("%d%d", &n, &time);
        int lTime[n], eValue[n], max = 0, flag = 0;
        for (i = 0; i < n; i++)
        {
            
             scanf("%d", &lTime[i]);
            if (lTime[i] < time)
                flag = 1;
        }
        for (i = 0; i < n; i++)
        {
             scanf("%d", &eValue[i]);
        }
        if (flag)
        {
            int find = 1;
            while (find>0)
            {

                max = 0;
                for (i = 0; i < n; i++)
                {
                    if (eValue[i]>max)
                    {
                        max = i;
                    }
                }
                if (lTime[max] + max <= time)
                {
                    printf("%d\n", max+1);
                    find=0;
                }
                else
                {
                    n=max;
                }
               
            }
        }
        else
             printf("%d\n", -1);
             
    }

    return 0;
}