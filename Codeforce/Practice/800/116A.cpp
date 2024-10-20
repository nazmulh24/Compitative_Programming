/***********************************************************************

Name --> A. Tram
Link --> https://codeforces.com/problemset/problem/116/A

Input-->
4
0 3
2 5
4 2
4 0

Output-->
6

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
    int n;
    cin >> n;

    int a[n], b[n];

    int mp = INT_MIN;
    int tp = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];

        tp += (+b[i] - a[i]);
        mp = max(mp, tp);
    }

    cout << mp << endl;
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
