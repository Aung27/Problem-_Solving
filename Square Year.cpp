#include <bits/stdc++.h>
using namespace std;
// okay

void solve()
{
    
    string s;
    cin>>s;
    int n=stoi(s);
    for(int i=1;i<100;i++)
    {
        if(i*1==n)
        {
            cout<<n/2<<' ';
            cout<<n-(n/2)<<endl;
            return ;
        }
    }
    cout<<-1<<endl;

    
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
