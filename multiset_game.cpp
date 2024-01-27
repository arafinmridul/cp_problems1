#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define nl '\n'

// CF 1913C

vector<pair<int, int>> v;

void go()
{
    int cur = 1;
    for (int i = 0; i < 30; ++i)
    {
        v.push_back({cur, 0});
        cur *= 2;
    }
}

void solve()
{
    int x, y;
    cin >> x >> y;

    if (x == 1)
    {
        int add = 1;
        for (int i = 0; i < y; ++i)
        {
            add *= 2;
        }
        for (auto &e : v)
        {
            if (e.first == add)
                e.second++;
        }
        return;
    }

    for (int i = v.size() - 1; i >= 0; --i)
    {
        int ff = v[i].first;
        int ss = v[i].second;
        if (y >= ff)
        {
            int tmp = y / ff;
            if (tmp > ss)
                y -= ff * ss;
            else
                y -= ff * tmp;
        }
    }
    cout << (y ? "NO\n" : "YES\n");
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    go();
    while (t--)
    {
        solve();
    }
}