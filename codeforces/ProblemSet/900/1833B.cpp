#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v, v1;
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            v1.push_back(x);
        }
        

        for (int i = 0; i < n; ++i)
        {
            if (v[i] >=0)
            {

                for (int j = 0; j < v1.size(); ++j)
                {
                    sort(v1.begin(), v1.end(), greater<int>());
                    for(int i=0;i<v1.size();++i) cerr<<v1[i]<<" ";
                    cerr<<endl;
                    if (abs(v[i] - v1[j]) <= k)
                    {
                        cout << v1[j] << " ";
                        v1.erase(v1.begin() + j);
                        break;
                    }
                }
            }
            else
            {
                 for (int j = 0; j < v1.size(); ++j)
                {
                    sort(v1.begin(), v1.end());
                    for(int i=0;i<v1.size();++i) cerr<<v1[i]<<" ";
                    cerr<<endl;
                    
                    if (abs(v[i] - v1[j]) <= k)
                    {
                        cout << v1[j] << " ";
                        v1.erase(v1.begin() + j);
                        break;
                    }
                }
            }
        }
        cout<<endl;
    }
}