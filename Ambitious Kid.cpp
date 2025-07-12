#include <bits/stdc++.h>
using namespace std;
long long MAX;

void solve()
{
    long long n;
    cin >> n;
    vector<long long> second_element;
    long long lowest_first_element = 1e10;
    for (int i = 0; i < n; i++)
    {
        long long m;
        cin >> m;
        vector<long long> a(m);
        for (auto &x : a)
        {
            cin >> x;
        }
        sort(a.begin(), a.end());
        second_element.push_back(a[1]);
        lowest_first_element = min(lowest_first_element, a[0]);
    }
    sort(second_element.begin(), second_element.end());
    long long sum_of_second_element = accumulate(second_element.begin(), second_element.end(), 0LL);
    long long Lowest_second_minimum = second_element[0];
    long long answer = lowest_first_element + sum_of_second_element - Lowest_second_minimum;
    cout << answer << endl;
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
