// algorithm to find all the prime numbers within a certain range in (log log n)
#include <bits/stdc++.h>
using namespace std;

void SOE(int n)
{
    int MAX = n;
    bool prime[MAX + 1];
    memset(prime, true, sizeof(prime));

    for (int i = 2; i * i <= MAX; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= MAX; j += i)
            {
                prime[j] = false;
            }
        }
    }
    printf("Prime numbers till %d are : ", n);
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
            cout << i << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    SOE(n);
    return 0;
}