#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        long long num[n];
        for(int i=0;i<n;i++)
        {
            cin>>num[i];

        } 
        long long max=LONG_LONG_MIN;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                long long x= num[i]*num[j];
                if((x)>max)
                    max=x;
            }
        }
        cout<<max<<endl;
    }

    return 0;
}