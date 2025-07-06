#include <bits/stdc++.h>
using namespace std;
void solve()
{

    long long int n,k;
    cin>>n>>k;
    vector<long long int>v;
    for(long long int i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if(i!=n/i)
            {
                v.push_back(n/i);
            }
        }


    }
    sort(v.begin(),v.end());
    k--;
    if(k>=v.size())
    {
        cout<<-1<<endl;
        return;
    }
    cout<<v[k]<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
