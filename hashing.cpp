// count how many a number appeared in the arr

#include <bits/stdc++.h>
using namespace std;

int print(int m, int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] == m)
        {
            count = count + 1;
        }
    return count;
}

int main()
{
    int m;
    cin >> m;
    int n;
    cin >> n;
    // int arr[] = {2, 5, 6, 7, 2, 9, 1, 1};
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << print(m, arr, size);
    return 0;
}

// hashing is the technique  which  prestore/fetch the data
// and starting with the value 0 and then its changes according to how many times the value appeared in array

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for( int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
// }