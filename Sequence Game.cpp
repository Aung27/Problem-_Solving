#include <bits/stdc++.h>
using namespace std;
long long MAX;

void solve()
{
    long long int n;
    cin >> n;
    long long a[n];
    vector<long long> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            v.push_back(a[i]);
            v.push_back(a[i + 1]);
        }
        else
        {
            v.push_back(a[i]);
        }
    }
    v.push_back(a[n - 1]);
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
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
