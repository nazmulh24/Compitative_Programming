/***********************************************************************

Name --> A. Beautiful Year
Link --> https://codeforces.com/problemset/problem/271/A

Input-->
1987

Output-->
2013


Input-->
2013

Output-->
2014

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

bool has_distinct_digits(int y)
{
    string year = to_string(y);
    set<char> digits(year.begin(), year.end());

    // for (auto u : digits)
    //     cout << u << " ";
    // cout << endl;

    if (digits.size() == year.size())
        return true;
    else
        return false;
}

int find_next_beautiful_year(int y)
{
    y += 1;
    while (has_distinct_digits(y) == false)
        y += 1;
    return y;
}

void solve()
{
    int y;
    cin >> y;

    cout << find_next_beautiful_year(y) << endl;
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
