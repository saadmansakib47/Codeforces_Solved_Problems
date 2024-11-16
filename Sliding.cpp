#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m, r, c;
        cin >> n >> m >> r >> c;
        cout << (n - r) * (m - 1) + n * m - (r - 1) * m - c << endl;
    }
}
