/***********************************************************************

Name --> E
Link -->

Example-->


***********************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define float double
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

double Volume(double S)
{
    // Solve for s, the side length of the square base
    double s = sqrt(S / 2);
    
    // Calculate the slant height l from the surface area formula
    double l = (S - s * s) / (2 * s);
    
    // Calculate the height h using the Pythagorean theorem
    double h_squared = l * l - (s / 2) * (s / 2);
    
    if (h_squared < 0) {
        return 0.0;  // Invalid configuration (negative height)
    }

    double h = sqrt(h_squared);

    // Calculate the volume of the pyramid
    double volume = (1.0 / 3) * s * s * h;
    return volume;
}

void solve()
{
    double x;

    while (cin >> x && x >= 0)
    {
        double v = Volume(x);

        cout << fixed << setprecision(4) << v << endl;
    }
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