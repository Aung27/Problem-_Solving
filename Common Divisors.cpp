#include <iostream>
using namespace std;

long long findGCD(long long a, long long b)
{
    while (b != 0)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int countCommonDivisors(long long num)
{
    int count = 0;
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
            if (i != num / i)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;

    long long a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long current_GCD = a[0];
    for (int i = 1; i < n; i++)
        current_GCD = findGCD(current_GCD, a[i]);

    int answer = countCommonDivisors(current_GCD);
    cout << answer << endl;

    return 0;
}
