#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    int k;
    cin >> s >> k;

    map<char, int> freq;

    for (char c : s)
    {
        freq[c]++;
    }

    int oddCount = 0;
    for (auto [ch, count] : freq)
    {
        if (count % 2 != 0)
        {
            oddCount++;
        }
    }
    if (oddCount > k + 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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
