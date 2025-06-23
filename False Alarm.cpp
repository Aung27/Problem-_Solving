#include <bits/stdc++.h>
using namespace std;
//okay

void solve()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = -1, r = -1;
    int j = n-1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1 && l < 0)
        {
            l = i;
        }
        if (a[j] == 1 && r < 0)
        {
            r = j;
        }
        j--;
    }
    if ((r - l+1) <= x)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
