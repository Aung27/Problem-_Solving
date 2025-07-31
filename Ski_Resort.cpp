#include <bits/stdc++.h>
using namespace std;

void solve()
{
   long long int n,k,q;
   cin>>n>>k>>q;
   long long int a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   long long int count=0;
   long long int ans=0;
   for(int i=0;i<n;i++)
   {
    if(a[i]<=q)
    {
        count++;
        if(i==n-1 || a[i+1]>q)
        {
            if(count>=k)
            {
                 long long l=count-k+1;
                 ans+=(l*(l+1)/2);
            }
            count=0;
        }
    }
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
