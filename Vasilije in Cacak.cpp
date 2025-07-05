#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n, k, x;
    cin >> n >> k >> x;
    long long int min_max = (k * (k + 1)) / 2;
    long long int maxi_max = (n * (n + 1)) / 2 - ((n - k) * ((n - k) + 1)) / 2;
    if (x <= maxi_max && x >= min_max)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}
