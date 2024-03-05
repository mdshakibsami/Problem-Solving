#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        string str;
        cin >> str;

        int cnt = 0;

        set<string> st;

        for(int i = n - 1; i > 0; i--){
            string sub = "";
            sub = sub + str[i] + str[i - 1];
            st.insert(sub);
        }

        for(auto &i : st){
            cout << i << " ";
        }
        cout << endl;

    }
    
}