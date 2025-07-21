
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];

    int count1=0;
    int count2=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    int ans=0;

    while(count1<count2 || count2%2==1)
    {
        ans++;
        count1++;
        count2--;

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
