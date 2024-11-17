/***********************************************************************

Name --> Nazmul
Link --> C

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

bool check_validity(int PA, int PB, int PC)
{
    rep(i, 0, 3)
    {
        rep(j, 0, 3)
        {
            rep(k, 0, 3)
            {
                int pointsA = 0, pointsB = 0, pointsC = 0;

                if (i == 0)
                    pointsA += 3;
                else if (i == 1)
                    pointsB += 3;
                else
                {
                    pointsA += 1;
                    pointsB += 1;
                }

                if (j == 0)
                    pointsB += 3;
                else if (j == 1)
                    pointsC += 3;
                else
                {
                    pointsB += 1;
                    pointsC += 1;
                }

                if (k == 0)
                    pointsA += 3;
                else if (k == 1)
                    pointsC += 3;
                else
                {
                    pointsA += 1;
                    pointsC += 1;
                }

                if (pointsA == PA && pointsB == PB && pointsC == PC)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    bool valid = check_validity(a, b, c);

    cout << (valid ? "perfectus" : "invalidum") << endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    int x = 1;
    cin >> t; // Uncomment if multiple test cases

    while (t--)
    {
        cout << "Case " << x << ": ";
        solve();
        x++;
    }

    return 0;
}
