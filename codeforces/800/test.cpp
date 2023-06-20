#include <bits/stdc++.h>
using namespace std;
// occurs signed integer overflow,then i used long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {

                if ((arr[i] * arr[j]) > max)
                {
                    max = arr[i] * arr[j];
                    
                }
            }
        }
        cout << max << endl;
    }
}