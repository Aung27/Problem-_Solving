#include <bits/stdc++.h>
using namespace std;
int dx[4] = {-1, 1, -1, 1};
int dy[4] = {-1, -1, 1, 1};

void solve()
{

    long long int a, b;
    cin >> a >> b;
    long long x_king, y_king;
    cin >> x_king >> y_king;
    long long x_quenn, y_queen;
    cin >> x_quenn >> y_queen;

    set<pair<int, int>> king_hits, queen_hits;
    for (int i = 0; i < 4; i++)
    {
        king_hits.insert({x_king + dx[i] * a, y_king + dy[i] * b});
        king_hits.insert({x_king + dx[i] * b, y_king + dy[i] * a});

        queen_hits.insert({x_quenn + dx[i] * a, y_queen + dy[i] * b});
        queen_hits.insert({x_quenn + dx[i] * b, y_queen + dy[i] * a});
    }
    int count = 0;
    for (auto position : king_hits)
    {
        if (queen_hits.find(position) != queen_hits.end())
            count++;
    }
    cout << count << endl;
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
