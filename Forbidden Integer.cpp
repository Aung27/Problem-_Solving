#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> v;
    if (x == 1)
    {

        if (k == 1)
        {
            cout << "NO" << endl;
            return;
        }
        if (k == 2 && n % 2 != 0)
        {
            cout << "NO" << endl;
            return;
        }
    }

    if (x > 1 && k != 1)
    {
        cout << "YES" << endl;
        cout << n << endl;
        for (int i = 0; i < n; i++)
        {
            cout << 1 << ' ';
        }
        cout << endl;
        return;
    }

    while (n != 0)
    {
        n -= 2;
        if (n == 1)
        {
            v.push_back(3);
            break;
        }
        v.push_back(2);
    }
    cout << "YES" << endl;
    cout << v.size() << endl;
    for (auto x : v)
    {
        cout << x << ' ';
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
