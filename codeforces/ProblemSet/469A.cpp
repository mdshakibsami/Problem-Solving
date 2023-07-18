#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int arr[n*2];
    for(int i=0;i<n;++i) cin>>arr[i];
    bool notFound;
    for(int i=1;i<=n;++i)
    {   
        bool found=false;

        for(int j=0;j<n*2;++j)
        {
            if(i==arr[j]) 
            {
                cout<<arr[j];
                found=true;
                break;
            }
        }
        if(found==false) 
        {
            notFound=true;
            break;
        }
    }
    // if(notFound) cout<<"Oh, my keyboard!";
    // else cout<<"I become the guy.";
    
}