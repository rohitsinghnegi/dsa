#include <bits/stdc++.h>
using namespace std;

// reverse an array
void print(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}

void reverse(int i, int l, int arr[])
{
    if (i >= l)
        return;
    swap(arr[i], [l]);
    reverse(arr, i + 1, l - 1);
}

int main()
{
    int n;
    int arr[] = {1, 2, 3, 4, 5};
    reverse(arr, 0, n - 1);
    print(arr, n);
    return 0;
}