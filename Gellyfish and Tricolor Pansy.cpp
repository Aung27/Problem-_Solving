#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(min(a,c)>=min(b,d))
    {
        cout<<"Gellyfish"<<endl;
    }
    else
    {
        cout<<"Flower"<<endl;
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
