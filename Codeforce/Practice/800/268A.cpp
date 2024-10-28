/***********************************************************************

Name --> A. Games
Link --> https://codeforces.com/problemset/problem/268/A

Example-->

inputCopy
3
1 2
2 4
3 4

outputCopy
1


inputCopy
4
100 42
42 100
5 42
100 5

outputCopy
5


inputCopy
2
1 2
1 2

outputCopy
0

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

    int h[n], g[n];

    rep(i, 0, n)
    {
        cin >> h[i] >> g[i];
    }

    int cnt = 0;

    rep(i, 0, n)
    {
        rep(j, 0, n)
        {
            if (i != j && h[i] == g[j])
                cnt++;
        }
    }

    cout << cnt << endl;
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
