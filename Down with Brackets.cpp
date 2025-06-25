#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int zero = 0;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            zero++;
        }
        else
        {
            zero--;
            if (zero == 0)
            {
                count++;
            }
        }
    }
    if (count > 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
