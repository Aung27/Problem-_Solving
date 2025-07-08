#include <bits/stdc++.h>
using namespace std;
void solve()
{

    int n, k;
    cin >> n >> k;
    int a[n];
    int ans = k;
    int even=0;
    long long int total=1;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            even++;
        if(a[i]%k==0)
            ans=0;
        ans=min(ans,k-a[i]%k);

    }


    if(k==4)
    {
        if(even>=2)
        {
            cout<<0<<endl;
        }
        else if(even==1)
        {
            cout<<min(ans,1)<<endl;
        }
        else
        {
            cout<<min(ans,2)<<endl;
        }
        return;
    }
    cout<<ans<<endl;
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
