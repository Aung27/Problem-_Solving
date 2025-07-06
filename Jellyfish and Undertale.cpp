#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int a, b, n;
    cin >> a >> b >> n;
    long long int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    long long maximum_time=b;
    for(int i=0; i<n; i++)
        maximum_time+=min(arr[i],a-1);
    cout<<maximum_time<<endl;

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
