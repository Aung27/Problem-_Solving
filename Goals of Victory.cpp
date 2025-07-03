#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n-1];
    int total=0;
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
        total=total+a[i];
    }
    cout<<-(total)<<endl;
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
