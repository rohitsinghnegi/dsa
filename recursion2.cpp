// submission of first n numbers parametized way
#include <bits/stdc++.h>
using namespace std;

void print(int i, int sum, int n)
{
    if (i > n)
    {
        cout << sum;
        return;
    }
    print(i + 1, sum + i, n);
}
int main()
{
    int n;
    cin >> n;
    print(1, 0, n);
    return 0;
}

// functional way

int print(int n)
{
    if (n == 0)
        return 0;

    else
        return (n + print(n - 1));
}
int main()
{
    int n;
    cin >> n;
    cout << print(n);
    return 0;
}
// factorial

int fact(int n)
{
    if (n == 0)
        return 1;
    return (n * fact(n - 1));
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n);
}