#include<bits/stdc++.h>
using namespace std;
// okay

void solve()
{

    string s;
    cin >> s;
    int n = stoi(s);
    for (int i = 0; i <= 100; i++)
    {
        if (i * i == n)
        {
            cout << i << ' ';
            cout << 0 << endl;
            return;
        }
    }
    cout << -1 << endl;
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
