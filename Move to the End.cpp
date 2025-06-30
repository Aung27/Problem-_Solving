#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int j = 0; j < n; j++)
        cin >> a[j];
    vector<int> pmax(n + 1);
    vector<long long> psum(n + 1);
    for (int j = 0; j < n; j++)
    {
        pmax[j + 1] = max(pmax[j], a[j]);
        psum[j + 1] = psum[j] + a[j];
    }
    for (int k = 1; k <= n; k++)
        cout << pmax[n - k + 1] + psum[n] - psum[n - k + 1] << " ";
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