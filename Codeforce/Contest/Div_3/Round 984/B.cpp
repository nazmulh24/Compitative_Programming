/***********************************************************************

Name --> B. Startup
Link --> https://codeforces.com/contest/2036/problem/B

Example-->


***********************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
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

void solve2()
{
    int n, k;
    cin >> n >> k;

    unordered_map<int, int> brand_Cost;

    rep(i, 0, k)
    {
        int ind, val;
        cin >> ind >> val;

        brand_Cost[ind] += val;
    }

    vector<int> company;
    for (auto [x, y] : brand_Cost)
    {
        company.pb(y);
    }

    sort(all(company), greater<int>());

    int ans = 0;

    rep(i, 0, min(n, (int)company.size()))
    {
        ans += company[i];
    }

    cout << ans << endl;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> company(k, 0);
    rep(i, 0, k)
    {
        int ind, val;
        cin >> ind >> val;

        ind--;
        company[ind] += val;
    }

    sort(all(company), greater<int>());

    int ans = 0;

    rep(i, 0, min(n, k))
    {
        ans += company[i];
    }

    cout << ans << endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t; // Uncomment if multiple test cases

    while (t--)
    {
        solve2();
    }

    return 0;
}