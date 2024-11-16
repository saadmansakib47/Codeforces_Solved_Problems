#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;

        int f_x1 = abs(x2 - x1) + abs(x3 - x1);
        int f_x2 = abs(x1 - x2) + abs(x3 - x2);
        int f_x3 = abs(x1 - x3) + abs(x2 - x3);

        cout << min({f_x1, f_x2, f_x3}) << "\n";
    }
    return 0;
}

