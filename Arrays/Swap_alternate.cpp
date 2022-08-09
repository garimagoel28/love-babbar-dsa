#include <bits/stdc++.h>
using namespace std;

void Swap_alternate(int arr[], int n)
{
    for (int i = 1; i < n; i += 2)
        swap(arr[i], arr[i - 1]);
}

void Print_Array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    Swap_alternate(arr, n);
    Print_Array(arr, n);
}