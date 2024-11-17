/***********************************************************************

Name --> C. Anya and 1100
Link --> https://codeforces.com/contest/2036/problem/C

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

void solve()
{
    string s;
    cin >> s;

    string x = "1100";

    set<int> index;

    rep(i, 0, s.size() - 3)
    {
        if (s.substr(i, 4) == x)
            index.insert(i);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int ind;
        char val;
        cin >> ind >> val;

        ind--;

        if (s.size() < 4)
            no;
        else
        {
            rep(i, ind - 3, ind + 1)
            {
                if (i >= 0 && i <= s.size() - 4)
                {
                    if (s.substr(i, 4) == x)
                        index.insert(i);
                    else
                        index.erase(i);
                }
            }

            if (index.size() == 0)
                no;
            else
                yes;
        }
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
