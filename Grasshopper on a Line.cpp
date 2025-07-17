#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    if (n < k)
    {
        cout << 1 << endl;
        cout << n << endl;
        return;
    }
    if (n % k != 0)
    {
        cout << 1 << endl;
        cout << n << endl;
    }
    else
    {
        int x = n - (k - 1);
        n = n - x;
        cout << 2 << endl;
        cout << x << ' ' << n << endl;
    }
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
