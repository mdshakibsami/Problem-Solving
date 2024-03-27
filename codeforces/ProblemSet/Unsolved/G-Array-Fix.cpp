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
    vector<int>v(n),temp;
    for(int i=0;i<n;i++) cin>>v[i];
    //====================================
    temp = v;
    sort(temp.begin(),temp.end());
    if(temp==v) cout<<"YES"<<endl;
    else {

        vector<int>newVector,sortedNV;

    for(int i=0;i<n;i++)
    {
        int count=0;
        while (v[i]!=0)
        {
            int y = v[i]%10;
            newVector.push_back(y);
            v[i]/=10;
            count++;
        }
        if(count==2)
        {
            int sizeNV = newVector.size();
        swap(newVector[sizeNV-2],newVector[sizeNV-1]);
        } 
        
    }

    sortedNV = newVector;
    sort(sortedNV.begin(),sortedNV.end());

    if(sortedNV == newVector) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
   }
    }
    
    
    
   
}