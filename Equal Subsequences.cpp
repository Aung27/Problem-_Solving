#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        if (i <= k)
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }
    cout << endl;
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
