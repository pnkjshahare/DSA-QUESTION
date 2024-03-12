#include <bits/stdc++.h>
using namespace std;
// Left rotated by D placess
int Reverse(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        end--;
        start++;
    }
}
int RotatedArrayD(int arr[], int n,int d)
{
    Reverse(arr,0,  d-1);
    Reverse(arr, d, n-1);
    Reverse(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
// left Rotated by one place
int RotatedArrayLeft(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n,d;
    cin >> n>>d;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // RotatedArrayLeft(arr, n);
    RotatedArrayD(arr,n,d);
     return 0;
}