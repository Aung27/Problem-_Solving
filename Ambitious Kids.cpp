#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    long long a[n];
    long long ans = 1e18;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans = min(abs(a[i]), ans);
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
