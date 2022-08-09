// https://www.codingninjas.com/codestudio/problems/find-unique_625159?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1

#include <bits/stdc++.h>
using namespace std;

void Find_Unique(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans ^= arr[i];
    cout << ans;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    Find_Unique(arr, n);
}