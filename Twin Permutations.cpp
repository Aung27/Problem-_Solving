
#include <bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       int x;
       cin>>x;
       cout<<n+1-x<<' ';
   }
   cout<<endl;

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
