#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,k;
    cin>>n>>k;
    vector<pair<long long,long long >>v;
    vector<long long>ans;
    for(int i=0; i<n; i++)
    {
        long long x;
        cin>>x;
        x=x%k;
        if(x==0)
        {
            x=k;
            ans.push_back(i+1);
            continue;
        }
        v.push_back({x,i+1});

    }
    sort(v.begin(),v.end(),[&](pair<int,int>x,pair<int,int> y)
    {
        if(x.first==y.first)
        {
            return(x.second<y.second);
        }
        return(x.first>y.first);
    });
    for(auto i: v)
    {
        ans.push_back((i.second));
    }
    for(int i=0; i<n; i++)
    {
        cout<<ans[i]<<' ';
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
