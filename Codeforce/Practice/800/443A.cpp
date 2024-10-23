/***********************************************************************

Name --> A. Anton and Letters
Link --> https://codeforces.com/problemset/problem/443/A

Example-->

inputCopy
{a, b, c}

outputCopy
3


inputCopy
{b, a, b, a}

outputCopy
2


inputCopy
{}
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
    string s;
    getline(cin, s);

    set<char> dl;

    for (auto u : s)
        if (u >= 'a' && u <= 'z')
            dl.insert(u);

    cout << dl.size() << endl;
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
