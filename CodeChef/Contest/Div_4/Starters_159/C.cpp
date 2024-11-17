/***********************************************************************

Name --> Elections
Link --> https://www.codechef.com/START159D/problems/USELEC

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
    int n, x;
    cin >> n >> x;

    vector<int> A(n), B(n);

    rep(i, 0, n)
    {
        cin >> A[i];
    }
    rep(i, 0, n)
    {
        cin >> B[i];
    }

    int rw = n / 2 + 1;

    int c1 = 0, c2 = 0;

    rep(i, 0, n)
    {
        if (A[i] > B[i])
        {
            c1++;
        }
        else
        {
            int y = abs(A[i] - B[i]) + 1;

            if (A[i] + y > B[i] && x >= y)
            {
                c1++;
                x = x - y;
            }
            else
            {
                c2++;
            }
        }
    }

    if (c1 >=rw)
        yes;
    else
        no;
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
