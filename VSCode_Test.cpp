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
#ifdef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

void solve() 
{
    // Solution code here
}

int main() 
{
    FAST_IO;
    
    //auto start = chrono::high_resolution_clock::now();  

    int t;
    cin >> t;
    while (t--) 
    {
        solve();
    }

    /*
    auto stop = chrono::high_resolution_clock::now();  // Stop the timer
    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cerr << "Execution time: " << duration.count() << " microseconds\n";
    */

    system("pause");

    return 0;
}
