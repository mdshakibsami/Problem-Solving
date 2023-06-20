#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        bool nagetiveFlag=false,positiveFlag=false;
        long long arr[n],sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<=0) nagetiveFlag=true;
            if(arr[i]>0) positiveFlag=true;
            sum= sum+abs(arr[i]);
        }
        
        if(nagetiveFlag && positiveFlag)
        {
            int count=0,operation=0;
            bool positive =false;
            for(int i=0;i<n;i++)
            {
                
                if(arr[i]<0)
                {
                    count++;
                    if(count==1) operation++;
                }
                else if(arr[i]>0)
                {
                    count=0; 
                }
            }
            cout<<sum<<" "<<operation<<endl;
        }
        else if(nagetiveFlag)
        {
            cout<<sum<<" "<<1<<endl;
        }
        else
        {
              cout<<sum<<" "<<0<<endl;
        }
    }
    
}