/***********************************************************************

Name --> B. Sakurako and Water
Link --> https://codeforces.com/contest/2033/problem/B

Example-->
inputCopy
4
1
1
2
-1 2
3 0
3
1 2 3
-2 1 -1
0 0 -1
5
1 1 -1 -1 3
-3 1 4 4 -4
-1 -1 3 0 -5
4 5 3 -3 -1
3 1 -3 -1 5

outputCopy
0
1
4
19

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

    vector<vector<int> > a(n, vector<int>(n));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    int cnt = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (a[i][j] < 0)
            {
                // Number of operations needed to make it non-negative
                int r_op = -a[i][j];
                cnt += r_op;

                // Apply the operations to all diagonals of submatrices ending at (i, j)
                for (int x = i, y = j; x >= 0 && y >= 0; x--, y--)
                    a[x][y] += r_op;
            }
        }
    }

    cout << cnt << endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t; // Uncomment if multiple test cases

    while (t--)
    {
        solve();
    }

    return 0;
}
