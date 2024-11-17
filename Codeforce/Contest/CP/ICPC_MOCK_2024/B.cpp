/***********************************************************************

Name --> Nazmul
Link --> B

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

int getIndex(char c)
{
    return c - 33;
}

void solve()
{

    char c1, c2;
    cin >> c1 >> c2;

    int idx1 = getIndex(c1), idx2 = getIndex(c2);
    vector<pair<int, int>> results;

    for (int r = 1; r <= 94; ++r)
    {
        if (94 % r == 0)
        { // columns must divide 94
            int c = 94 / r;
            // Check if both characters fall in the same row
            if (idx1 / c == idx2 / c)
            {
                results.push_back({r, c});
            }
        }
    }

    for (auto [x, y] : results)
    {
        cout << x << " " << y << endl;
    }
    cout << endl;
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
