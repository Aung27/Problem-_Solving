#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int l = a[0];
    int r = a[n - 1];
    int ans1;
    int ans2;
    for (int i = 0; i < n ; i++)
    {
        if((r+a[i])%2==0)
        {
            ans1=i;
            break;
        }
    }
    for (int i = n-1; i >= 0 ; i--)
    {
        if((l+a[i])%2==0)
        {
            ans2=n-i-1;
            break;
        }
    }
    cout<<min(ans1,ans2);
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
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int l = a[0];
    int r = a[n - 1];
    int ans1;
    int ans2;
    for (int i = 0; i < n ; i++)
    {
        if((r+a[i])%2==0)
        {
            ans1=i;
            break;
        }
    }
    for (int i = n-1; i >= 0 ; i--)
    {
        if((l+a[i])%2==0)
        {
            ans2=n-i-1;
            break;
        }
    }
    cout<<min(ans1,ans2)<<endl;
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
