#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr[i]=x;
        }
        if(arr[0]==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    
}