
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mx = a[0];
    for (int i = 1; i < n; i++)
    {
        if ((a[i] - a[i - 1]) > mx)
        {
            mx = a[i] - a[i - 1];
        }
    }
    if (mx > (x - a[n - 1]) * 2)
    {
        cout << mx << endl;
    }
    else
    {
        cout << (x - a[n - 1]) * 2 << endl;
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
