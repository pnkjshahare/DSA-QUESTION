#include <bits/stdc++.h>
using namespace std;
int InsertionSort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j >= 0 && arr[j ] > arr[j+1])
        {
            int temp = arr[j ];
            arr[j ] = arr[j+1];
            arr[j+1] = temp;
            j--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    InsertionSort(arr, n);
    return 0;
}