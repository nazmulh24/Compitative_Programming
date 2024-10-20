/***********************************************************************

Name --> A. George and Accommodation
Link --> https://codeforces.com/problemset/problem/467/A

Input-->
3
1 1
2 2
3 3

Output-->
0


Input-->
3
1 10
0 10
10 10

Output-->
2

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

    int p[n], q[n];

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> p[i] >> q[i];

        if (p[i] + 2 <= q[i])
            cnt++;
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
