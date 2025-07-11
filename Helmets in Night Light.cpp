#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, p;
    cin >> n >> p;
    vector<pair<long long, long long>> v(n);
    vector<long long> a(n), b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        v[i] = {b[i], a[i]};
    }
    sort(v.begin(), v.end());

    // for(auto it : v)
    // cout<<it.first<<' '<<it.second<<endl;
    long long minimum_cost = p;
    long long already_sheard = 1;

    for (auto it : v)
    {
        long long can_be_shared = it.second;
        long long sharing_cost = it.first;
        if (sharing_cost >= p)
        {
            break;
        }
        if (already_sheard + can_be_shared > n)
        {
            minimum_cost += (n - already_sheard) * sharing_cost;
            already_sheard = n;
            break;
        }
        else
        {
            minimum_cost += can_be_shared * sharing_cost;
            already_sheard += can_be_shared;
        }
    }
    minimum_cost += (n - already_sheard) * p;
    cout << minimum_cost << endl;
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
