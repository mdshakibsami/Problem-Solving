#include<bits/stdc++.h>
using namespace std;

int main()
{


    int n;
    cin>>n;
    int arr[n],sum=0,index,x=0;
    for(int i=0;i<n;i++)
    {

        cin>>arr[i];
        sum+=arr[i];
    }
    
    sort(arr, arr + n,greater<int>());
    //this function works frome index =0
  

    //checking

    for(int i=0;i<n;i++)
    {
    
         x+=arr[i];
         sum-=arr[i];
        if(x>sum)
        {

            index=i+1;
            break;
        }
    }
    cout<<index<<endl;

}