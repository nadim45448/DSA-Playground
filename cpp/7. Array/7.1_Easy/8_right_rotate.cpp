#include <bits/stdc++.h>
using namespace std;
void rightRotate(int arr[], int n)
{
    int k = 5;
    k = k % n;
    while (k--)
    {
        int temp = arr[n - 1];
        for (int i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
    }
}
void rRotate(int arr[], int n, int d)
{
    int r=n-d;
    
    reverse(arr+r, arr+n); //O(n-d)
    reverse(arr, arr+r); //O(d)
    reverse(arr, arr+n); //O(n)
}
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    // int arr[6] = {1, 2, 3, 4, 5, 6};
    // cout << "Before right rotation:";
    // display(arr, 6);
    // rightRotate(arr, 6);
    // cout << "After right rotation:";
    // display(arr, 6);


    int arr[6] = {1, 2, 3, 4, 5, 6};
    rRotate(arr, 6, 4);
    display(arr, 6);

    return 0;
}