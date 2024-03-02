#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++)cin>>arr[i];

    char last = arr[n-1];
    int count= 0;
    for (int i = 0; i < n-1; i++)if (last == arr[i]) count++;
    
    if(count==1)
    {
        if(arr[0]==last) cout<<2;
        else cout<<-1;
    } 
    else cout<<1;
}