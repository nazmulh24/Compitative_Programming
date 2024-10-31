/***********************************************************************

Name --> Largest Subsequence
Link --> https://www.codechef.com/START158D/problems/LARGESUB

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

    string s;
    cin >> s;

    int ab = 0, ba = 0;

    rep(i, 0, n - 1)
    {
        if (s[i] == 'a' && s[i + 1] == 'b')
        {
            ab++;
        }
        else if (s[i] == 'b' && s[i + 1] == 'a')
        {
            ba++;
        }
    }

    if (ab == ba)
        cout << n << endl;
    else
    {
        char f = s[0], l = s[n - 1];
        int ans1 = n, ans2 = n;

        rep(i, 0, n)
        {
            if (s[i] == f)
                ans1--;
        }

        per(i, 0, n)
        {
            if (s[i] == l)
                ans2--;
        }

        cout << max(ans1, ans2) << endl;
    }
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
