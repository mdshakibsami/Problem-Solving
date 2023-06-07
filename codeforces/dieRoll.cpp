#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y, w;
    cin >> y >> w;
    int count = 0;
    if (w > y)
    {
        w = 6 - w + 1;

        if (6 % w == 0)
            cout << 1 << "/" << (6 / w) << endl;
        else if (w == 4)
            cout << (w / 2) << "/" << (3) << endl;
        else
            cout << w << "/" << 6 << endl;
    }
    else
    {
        y = 6 - y + 1;

        if (6 % y == 0)
            cout << 1 << "/" << (6 / y) << endl;
        else if (y == 4)
            cout << (y / 2) << "/" << (3) << endl;
        else
            cout << y << "/" << 6 << endl;
    }

    return 0;
}