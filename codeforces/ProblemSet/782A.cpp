#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    map<int,int>m;
    int count =0;
    for(int i=0;i<2*n;i++)
    {
        int x;
        cin>>x;
        if(m[x]==0)
        {

         cerr<<x<<" "<<m[x]<<endl;
         count++;
         m[x]++;
         cerr<<x<<" "<<m[x]<<endl;
        }
        else m[x]++;

    }
    // for(auto x:m)
    // {
    //     if(x.second>max) max=x.second;
    // }
    cout<<count<<endl;
}