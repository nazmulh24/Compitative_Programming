/***********************************************************************

Name --> A. Anton and Polyhedrons
Link --> https://codeforces.com/problemset/problem/785/A

Example-->

inputCopy
4
Icosahedron
Cube
Tetrahedron
Dodecahedron

outputCopy
42


inputCopy
3
Dodecahedron
Octahedron
Octahedron

outputCopy
28

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

    string s[n];

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];

        if (s[i] == "Tetrahedron")
            ans += 4;
        else if (s[i] == "Cube")
            ans += 6;
        else if (s[i] == "Octahedron")
            ans += 8;
        else if (s[i] == "Dodecahedron")
            ans += 12;
        else if (s[i] == "Icosahedron")
            ans += 20;
    }

    cout << ans << endl;
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
