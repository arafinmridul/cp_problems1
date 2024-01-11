#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define ff first
#define ss second
#define fr(i, n) for (int(i) = 0; (i) < (n); ++(i))
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int, int>>
#define all(v) (v).begin(), (v).end()
#define sz(v) ((int)(v).size())
#define endl '\n'
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << ' ' << x << endl
#else
#define debug(x)
#endif

// CF 1909C

const int N = 2e5 + 5;
int a[N], b[N], c[N], d[N], e[N];

void solve()
{
    int n, s, t, r, i, j;
    cin >> n;
    s = t = r = 0;
    for (i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (i = 0; i < n; i++)
        cin >> b[i];
    sort(b, b + n);
    for (i = 0; i < n; i++)
        cin >> c[i];
    sort(c, c + n);
    for (i = j = 0; i < n; i++)
    {
        while (j < n && b[j] < a[i])
            d[t++] = b[j] - e[--r], j++;
        e[r++] = a[i];
    }
    while (j < n)
        d[t++] = b[j] - e[--r], j++;
    sort(d, d + n);
    for (i = 0; i < n; i++)
        s += d[i] * c[n - i - 1];
    cout << s << '\n';
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}