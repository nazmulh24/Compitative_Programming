/***********************************************************************

Name --> A. Find Minimum Operations
Link --> https://codeforces.com/problemset/problem/2020/A

Input -->
6
5 2
3 5
16 4
100 3
6492 10
10 1

Output-->
2
3
1
4
21
10

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
    int n, k;
    cin >> n >> k;

    if (k == 1)
    {
        cout << n << endl;
        return;
    }

    int cnt = 0;

    while (n > 0)
    {
        cnt += n % k;
        n = n / k;
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
