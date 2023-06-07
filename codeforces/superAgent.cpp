#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j;
    char matrix[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            cin >> matrix[i][j];
    }
    int flag=1;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
         {
            if(matrix[i][j]!=matrix[2-i][2-j])
            {
                 flag=0;
                break;
            }
         }   
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}