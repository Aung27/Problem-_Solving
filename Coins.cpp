#include <bits/stdc++.h>
using namespace std;

void solve()
{
   long long int n, k;
        cin >> n >> k;
        bool found = false;
        for (int x = 0; x < 2; x++) {
            if (n - x * k >= 0 && (n - x * k) % 2 == 0) {
                found = true;
                break;
            }
        }
        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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
