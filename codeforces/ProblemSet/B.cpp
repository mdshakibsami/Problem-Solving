#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int price[n];
    for (int i = 0; i < n; ++i)
        cin >> price[i];
    sort(price, price + n);

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
       int index=n;
        while (true)
        {
            if (x == price[n - 1])
            {
                cout << n << endl;
                break;
            }
            else
            {
                
                index/=2;
                if(index<x)
                {
                    index+=index/2;
                    
                }
                else if(index>x)
                {
                    index-=index/2;
                }
                else if(index==x)
                {
                    break;
                }
            }
            cout<<index;
        }
    }
}