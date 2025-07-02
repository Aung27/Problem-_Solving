#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    bool b = false;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == k)
        {
            b = true;
        }
    }
    if (b)
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
