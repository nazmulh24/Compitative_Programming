/***********************************************************************

Name --> A. Nearly Lucky Number
Link --> https://codeforces.com/problemset/problem/110/A

Input-->
    40047

Output-->
    NO


Input-->
    7747774

Output-->
    YES


Input-->
    1000000000000000000

Output-->
    NO

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
    string n;
    cin >> n;

    int cnt = 0;

    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] == '4' || n[i] == '7')
            cnt++;
    }

    if (cnt == 4 || cnt == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
