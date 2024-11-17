#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int n, p;
    cin >> n >> p;

    if (p == 1)
    {
        if ((n/2) % 2 == 1)
            cout << "Oddius" << endl;
        else
            cout << "Evenius" << endl;
    }
    else
    {
        if ((n/2) % 2 == 0)
            cout << "Evenius" << endl;
        else
            cout << "Oddius" << endl;
    }
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t; // Read number of test cases

    int x = 1;
    while (t--)
    {
        cout << "Case " << x << ": ";
        solve();
        x++;
    }

    return 0;
}