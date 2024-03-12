#include <bits/stdc++.h>
using namespace std;
int print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}
int print2(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}
int print3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
int print4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

int print5(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        n--;
        cout << endl;
    }
}
int print6(int n)
 { int k=n;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j <n - i ; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (2 * i)+1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
        // n=n+2;
    }
}
int print7(int n){
    int start=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<start<<'\t';
            start++;
        }
    cout<<endl;
    }
}
int main()
{
    int n;
    cin >> n;
    // print1(n);
    // print2(n);
    // print3(n);
    // print4(n);
    print7(n);
    return 0;
}