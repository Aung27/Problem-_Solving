#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n;
    cin>>n;
    long long int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    map<long long int,long long int>mp;
    for(int i=0; i<n; i++)
        mp[a[i]]++;

    if(mp.size()>=3)
        cout<<"NO"<<endl;
    else
    {
        int t=mp.begin()->second;
        int l=mp.rbegin()->second;
        if(t==l)
            cout<<"YES"<<endl;
        else if(n%2==1 && abs(t-l)==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

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
