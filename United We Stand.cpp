#include <bits/stdc++.h>
using namespace std;
long long MAX;
bool okay = true;
bool check(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != a[i + 1])
        {
            okay = false;
            return okay;
        }
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long mx = *max_element(a.begin(), a.end());
    vector<long long> b, c;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != mx)
        {
            b.push_back(a[i]);
        }
        else
        {
            c.push_back(a[i]);
        }
    }
    if (b.size() == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << b.size() << ' ' << c.size() << endl;
        for (auto it : b)
        {
            cout << it << ' ';
        }
        cout << endl;
        for (auto it : c)
        {
            cout << it << ' ';
        }
        cout << endl;
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
