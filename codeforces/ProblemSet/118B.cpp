#include <bits/stdc++.h>
using namespace std;
int main()
{
    //unsloved
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i <= n; ++i)
    {
        for (int j = 0; j <= n - i+1; ++j)
            cout << " ";
        for (int j = 0; j <= i; ++j)
        {
            if (j != 0)
                cout << " ";

            cout << j;
        }
        for (int j = i - 1; j >= 0; --j)
        {
            if (j >i)
                cout << " ";

            cout << j;
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 0; --i)
    {
        for (int j = 1; j <= n - i; ++j)
            cout << " ";
        for (int j = 0; j <= i; ++j)
            cout << j;
        for (int j = i - 1; j >= 0; --j)
            cout << j;
        cout << endl;
    }
}