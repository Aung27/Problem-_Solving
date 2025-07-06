#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int count_of_1 = 0, count_of_0 = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
            count_of_1++;
        else
            count_of_0++;
    }
    int length_of_t = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1' && count_of_0 > 0)
            count_of_0--, length_of_t++;
        else if (s[i] == '0' && count_of_1 > 0)
            count_of_1--, length_of_t++;
        else
            break;
    }
    cout << s.size() - length_of_t << endl;
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
