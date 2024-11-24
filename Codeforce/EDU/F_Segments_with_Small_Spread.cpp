/***********************************************************************

Name --> F. Segments with Small Spread
Link --> https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F

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
#define forl(i, a, b) for (int i = (a); i < (b); ++i)
#define rfor(i, b, a) for (int i = (b); i >= (a); --i)
#define trav(a, x) for (auto &a : x)
#define UNIQUE(v) v.erase(unique(all(v)), v.end())
//********************************************************************

void solve()
{
    int n, s;
    cin >> n >> s;

    vector<int> v(n);
    forl(i, 0, n)
    {
        cin >> v[i];
    }

    int l = 0, r = 0, sum = 0, ans = 0;

    multiset<int> ml;

    while (r < n)
    {
        ml.insert(v[r]);

        int mn = *ml.begin();
        int mx = *ml.rbegin();

        if (mx - mn <= s)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (l <= r)
            {
                mn = *ml.begin();
                mx = *ml.rbegin();

                if (mx - mn <= s)
                {
                    break;
                }

                ml.erase(ml.find(v[l]));
                l++;
            }

            if (mx - mn <= s)
            {
                ans += (r - l + 1);
            }
        }

        r++;
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