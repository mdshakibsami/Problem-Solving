#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i,j;
    cin>>s;
    int count=0,x=s.size();
    for( i=0;i<s.size();i++)
    {
        int flag=1;
        for( j=i+1;j<s.size();j++)
        {
            if(s[i]==s[j])
            {
                flag=0;
                s[j]=0;
                count++;
            }
        }
        if(flag)
        {

        s[i]=s[j];
        cout<<s[j];
        } 
    }
    // x =x-count;
    // cout<<count;
    // if(x%2==0) cout<<"CHAT WITH HER!"<<endl;
    // else cout<<" IGNORE HIM!"<<endl;
}