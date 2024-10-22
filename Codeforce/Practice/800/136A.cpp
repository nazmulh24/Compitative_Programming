/***********************************************************************

Name --> A. Presents
Link --> https://codeforces.com/problemset/problem/136/A

Input-->
4
2 3 4 1

Output-->
4 1 2 3


Input-->
3
1 3 2

Output-->
1 3 2


Input-->
2
1 2

Output-->
1 2

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

    int p[n];
    for (int i = 1; i <= n; i++)
        cin >> p[i];

    int g[n];
    for (int i = 1; i <= n; i++)
        g[p[i]] = i;

    for (int i = 1; i <= n; i++)
        cout << g[i] << " ";
    cout << endl;
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
