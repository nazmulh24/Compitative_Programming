/***********************************************************************

Name --> Nazmul Hossain
Link --> F

Example-->


***********************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
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

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

void solve()
{
    int X, Y, Z;
    cin >> X >> Y >> Z;

    // Semi-perimeter
    ld s = (X + Y + Z) / 2.0;

    // Area of the triangle using Heron's formula
    ld area = sqrt(s * (s - X) * (s - Y) * (s - Z));

    // Circumradius R = (X * Y * Z) / (4 * Area)
    ld R = (X * Y * Z) / (4.0 * area);

    // Square of the shortest jump distance L^2 = 3 * R^2 / 4
    ld L2 = (3.0 * R * R) / 4.0;

    // Convert L^2 to an irreducible fraction
    int num = round(L2 * 1e9); // Numerator as integer
    int den = 1e9;             // Denominator

    // Reduce the fraction by gcd
    int g = gcd(num, den);
    num /= g;
    den /= g;

    // Output result
    cout << num << "/" << den << endl;
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
