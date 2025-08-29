#include <bits/stdc++.h>
using namespace std;

// problem 1 ; print name n times

int cnt = 0;
void print(int n)
{

    if (cnt >= n)
        return;
    cout << "rohit" << endl;
    cnt++;
    print(n);
}

int main()
{
    int n;
    cin >> n;
    print(n);
}

void print(int i, int n)
{
    if (i > n)
        return;
    cout << "rohit" << endl;
    print(i + 1, n);
}

int main()
{
    int n;
    cin >> n;
    print(1, n);
    return 0;
}

// p 2  print 1 to n

void print(int i, int n)
{
    if (i > n)
        return;
    cout << i << endl;
    print(i + 1, n);
}
int main()
{
    int n;
    cin >> n;
    print(1, n);
    return 0;
}
// p2 print n to 1;

void print(int i, int n)
{
    if (i < 1)
        return;
    cout << i << endl;
    print(i - 1, n);
}
int main()
{
    int n;
    cin >> n;
    print(n, n);
    return 0;
}

// print 1 to n using backtracing

void print(int i, int n)
{
    if (i < 1)
        return;
    print(i - 1, n);
    cout << i << endl;
}
int main()
{
    int n;
    cin >> n;
    print(n, n);
    return 0;
}

// print n to 1 with backtracing

void print(int i, int n)
{
    if (i > n)
        return;
    print(i + 1, n);
    cout << i << endl;
}
int main()
{
    int n;
    cin >> n;
    print(1, n);
    return 0;
}