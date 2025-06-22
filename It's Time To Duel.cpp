#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    int cn1 = 0, cn0 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            cn1++;
        }
        else
        {
            cn0++;
        }
    }
    if (cn0 == n || cn1 == n)
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == 0 && a[i+1] == 0)
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
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
