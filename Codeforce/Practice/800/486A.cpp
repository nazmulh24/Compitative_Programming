/***********************************************************************

Name --> A. Calculating Function
Link --> https://codeforces.com/problemset/problem/486/A

Input-->
4

Output-->
2


Input-->
5

Output-->
-3

***********************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define per(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define trav(a, x) for (auto &a : x)
#define UNIQUE(v) v.erase(unique(all(v)), v.end())
//********************************************************************

void solve()
{
    int x;
    cin >> x;

    int n = ceil(static_cast<double>(x) / 2);
    if (x % 2 == 0)
        cout << n << endl;
    else
        cout << -n << endl;

    // int s;
    // if (x % 2 == 0)
    // {
    //     x = x / 2;
    //     int s1 = x * x;
    //     int s2 = x * (x + 1);
    //     s = s2 - s1;
    // }
    // else
    // {
    //     x = (x / 2) + 1;
    //     int s1 = x * x;
    //     int s2 = x * (x + 1);
    //     s = (-1) * (s2 - s1);
    // }
    //  cout << s << endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t; // Uncomment if multiple test cases

    while (t--)
    {
        solve();
    }

    return 0;
}
