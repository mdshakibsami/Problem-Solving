#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,m,max=-1,min=(n*m)+1,skipFlag=0,skipLine;
    cin>>n>>m;
    char arr[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='*')
                {
                    // skipFlag=1;
                    
                    if(j>max)
                        max=j;
                    if(j<min)
                        min=j;
                        
                }
  
        }
        // if(skipFlag==0)
        //     skipLine =i;
    }
    //  for(i=0;i<n;i++)
    // {
    //     if(i==skipLine)
    //         continue;
    //     for(j=min;j<=max;j++)
    //     {
           
    //         cout<<arr[i][j];
            
    //     }
    //     cout<<endl;
    // }
    cout<<min<<endl<<max;
    
    return 0;
}