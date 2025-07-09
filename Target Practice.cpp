#include <bits/stdc++.h>
using namespace std;
void solve()
{
    char c;
    long long total=0;
    int a[10][10] = { {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                      {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                      {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                      {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                      {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                      {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                      {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                      {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                      {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                      {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},

    };
    for(int i=0;i<10;i++)
    {
        for(int k=0;k<10;k++)
        {   
            cin>>c;
            if(c == 'X')
            {
              total+=a[i][k];
            }
        }
    }
    cout<<total<<endl;
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
