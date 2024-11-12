#include <bits/stdc++.h>
using namespace std;
 
// Fast I/O
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
// Common Macros
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mp make_pair
 
// Constants
const int INF = 1e9 + 7;
const int MOD = 1e9 + 7;
const int MAXN = 2e5 + 5;
 
// Debug Macro for Local Testing
#ifdef LOCAL
#define dbg(x) cerr << #x << " = " << (x) << endl
#else
#define dbg(x)
#endif
 
// Ordered Set (PBDS) 
/*
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
template <class T>
using ordered_set = __gnu_pbds::tree<T, __gnu_pbds::null_type, std::less<T>,
                                      __gnu_pbds::rb_tree_tag, 
                                      __gnu_pbds::tree_order_statistics_node_update>;
*/
 
//Chronometer 
/*
#include <chrono>
using namespace std::chrono;
auto start = high_resolution_clock::now();
auto stop = high_resolution_clock::now();
auto duration = duration_cast<microseconds>(stop - start);
*/
 
// File Input/Output Switch for Local Testing
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
char s[1000005];
long long n;
 
bool check_1100(long long i)
{
    if (i < 0) return false;
    if (i >= n - 3) return false;
    if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0')
        return true;
    return false;
}
 
void solve() 
{
    cin >> s;
    n = strlen(s);
    long long ans = 0;
 
    for (long long i = 0; i < n; i++) 
    {
        if (check_1100(i)) {
            ans++;
        }
    }
 
    long long q;
    cin >> q;
    while (q--) {
        bool before = false, after = false;
        long long i, v;
        cin >> i >> v;
        i--;
 
        if (s[i] != '0' + v) {
            before = check_1100(i - 3) || check_1100(i - 2) || check_1100(i - 1) || check_1100(i);
            s[i] = '0' + v;  
            after = check_1100(i - 3) || check_1100(i - 2) || check_1100(i - 1) || check_1100(i);
            ans = ans + after - before;  
 
            if (ans > 0) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } 
        else 
        {
 
            cout << (ans > 0 ? "YES\n" : "NO\n");
        }
    }
}
 
int main() 
{
    FAST_IO;
 
    int t;
    cin >> t;
    while (t--) 
    {
        solve();
    }
    return 0;
}