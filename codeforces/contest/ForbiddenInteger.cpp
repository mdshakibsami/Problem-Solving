#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       int n,k,x,j=0;
       cin>>n>>k>>x;

       if(n%2==0)
       {
        int arr[]={0};
        for(int i=k;i>0;i--)
        {
            if(i==x) continue;
           
            else
            {
               while (n%i==0)
               {
                 cout<<n/i<<endl;
                 n/=i;
               }
               
            }
        }
             //cout<<n;
      
       }
       else
       {

       }
       
    }
}