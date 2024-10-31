/***********************************************************************

Name --> Even vs Odd Divisors
Link --> https://www.codechef.com/START158D/problems/EVENODDDIV

Example-->


***********************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define pb push_back
#define pf push_front
#define mp make_pair
#define mt make_tuple
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

    vector<int> v;

    rep(i, 1, n + 1)
    {
        if (n % i == 0)
            v.pb(i);
    }

    int e = 0, o = 0;

    trav(a, v)
    {
        if (a % 2 == 0)
            e++;
        else
            o++;
    }
    // cout << e << " " << o << endl;

    if (e > o)
        cout << 1 << endl;
    else if (e == o)
        cout << 0 << endl;
    else
        cout << -1 << endl;
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