#include<bits/stdc++.h>
using namespace std;
// okay

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 2; i <= n; i++)
    {
        cout << i << ' ';
    }
    cout << 1 << endl;
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
