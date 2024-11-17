/***********************************************************************

Name --> H - Line
Link --> https://vjudge.net/contest/670883#problem/H

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
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt = 0;
    vector<int> v(n);

    forl(i, 0, n)
    {
        int l = i;
        int r = n - 1 - i;

        if (s[i] == 'L')
        {
            cnt += l;
            v[i] = r - l;

            cout << cnt << " R ->" << v[i] << endl;
        }
        else
        {
            cnt += r;
            v[i] = l - r;

            cout << cnt << " L ->" << v[i] << endl;
        }
    }

    sort(rall(v));

    vector<int> ans(n);
    int currentValue = cnt;

    forl(i, 0, n)
    {
        if (v[i] > 0)
            currentValue += v[i];

        ans[i] = currentValue;
    }

    trav(a, ans)
    {
        cout << a << " ";
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
