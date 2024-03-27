#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, rev, revAdd;
        cin >> s;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            rev += s[i];
        }
        revAdd = rev + s;
        bool palindrome = true;
        for (int i = 0; i < s.size() / 2; i++)
        {
            if (s[i] != s[s.size() - i - 1])
            {
                palindrome = false;
                break;
            }
        }

        if (palindrome)
        {

            cout << s << endl;
        }
        else
        {
            bool flag = false;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] != revAdd[i])
                {
                    if (s[i] < revAdd[i])
                    {

                        flag = true;
                        break;
                    }
                    else
                    {
                        flag = false;
                        break;
                    }
                }
            }
            if (flag)
                cout << s << endl;
            else
                cout << revAdd << endl;
        }
    }
}