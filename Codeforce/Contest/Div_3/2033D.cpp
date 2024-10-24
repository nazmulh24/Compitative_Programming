/***********************************************************************

Name --> D. Kousuke's Assignment
Link --> https://codeforces.com/contest/2033/problem/D

Example-->
inputCopy
3
5
2 1 -3 2 1
7
12 -4 4 43 -3 -5 8
6
0 -4 0 3 0 1

outputCopy
1
2
3

***********************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define pb push_back
#define mp make_pair
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

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, int> preCnt; // To store counts of prefix sums
    int sum = 0;
    int cnt = 0;

    // Insert the initial prefix sum 0
    preCnt[0] = 1; // This handles the case where the prefix sum itself is 0

    for (int i = 0; i < n; ++i)
    {
        sum += a[i];

        // Check if the current sum has been seen before
        if (preCnt.find(sum) != preCnt.end())
        {
            cnt++;

            preCnt.clear();
            sum = 0;       // reset current sum to 0 for next segment
            preCnt[0] = 1; // reinsert the prefix sum 0
        }

        // Insert or update the current prefix sum in the map
        preCnt[sum]++;
    }

    cout << cnt << endl;
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
