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
            sum= sum+abs(arr[i]);
        }
        int i=0,count=0;
        //by updating one variable in while within a while
        while (i<n)
        {
            if(arr[i]<0)
            {
                count++;
                while (i<n && arr[i]<=0)
                {
                    i++;
                }
                

            }
            else
            {
                i++;
            }
        }

        cout<<sum<<" "<<count<<endl;
            

    }
}