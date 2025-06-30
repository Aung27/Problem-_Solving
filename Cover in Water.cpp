#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    int d = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
        {
            count++;
            d++;
            if (d == 3)
            {
                cout << 2 << endl;
                return;
            }
        }
        else
        {
            d = 0;
        }
    }
    cout << count << endl;
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
