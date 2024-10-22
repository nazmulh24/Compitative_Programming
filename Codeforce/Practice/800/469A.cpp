/***********************************************************************

Name --> A. I Wanna Be the Guy
Link --> https://codeforces.com/problemset/problem/469/A

Input-->
4
3 1 2 3
2 2 4

Output-->
I become the guy.


Input-->
4
3 1 2 3
2 2 3

Output-->
Oh, my keyboard!

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

    set<int> level;

    int p;
    cin >> p;

    int a[p];
    for (int i = 0; i < p; i++)
    {
        cin >> a[i];
        level.insert(a[i]);
    }

    int q;
    cin >> q;

    int b[q];
    for (int i = 0; i < q; i++)
    {
        cin >> b[i];
        level.insert(b[i]);
    }

    if (level.size() == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
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
