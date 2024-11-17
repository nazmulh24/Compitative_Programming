/***********************************************************************

Name --> I - Premutation
Link --> https://vjudge.net/contest/670883#problem/I

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

    vector<vector<int>> v(n);
    map<int, int> frequency;

    for (int i = 0; i < n; ++i)
    {
        v[i].resize(n - 1);
        for (int j = 0; j < n - 1; ++j)
        {
            cin >> v[i][j];
            frequency[v[i][j]]++;
        }
    }

    vector<int> result(n);

    for (auto [num, freq] : frequency)
    {
        if (freq == n - 1)
        {
            result[0] = num;
            break;
        }
    }

    for (const auto &seq : v)
    {
        if (seq[0] == result[0])
        {
            for (int i = 0; i < n - 1; ++i)
            {
                result[i + 1] = seq[i];
            }
            break;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << result[i] << " ";
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
