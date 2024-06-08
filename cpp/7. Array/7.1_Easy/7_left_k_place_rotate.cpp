#include <bits/stdc++.h>
using namespace std;
void leftRotate(int arr[], int n)
{
    int k = 6;
    k = k % n;
    while (k--) //O(n)

    {
        // left rotate by 2 place
        int temp = arr[0];
        for (int i = 0; i < n - 1; i++) //O(n)
        {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;
    }

    // tc: O(n^2)
    // space used to solve the problem: O(n) [what is the space use in this algorithm? ]
    // extra space: O(1)
}
void lRotate(int arr[], int n, int d)
{
    //optimal
    reverse(arr, arr+d); //O(d)
    reverse(arr+d, arr+n); //O(n-d)
    reverse(arr, arr+n); //O(n)
    //tc: O(2n)

    //sc: O(1)

}
void reverse(int arr[], int start, int end)
{
    while (start<=end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    
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
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Before left rotation:";
    // display(arr, 5);
    // leftRotate(arr, 5);
    // cout << "After left rotation:";
    // display(arr, 5);

    return 0;
}