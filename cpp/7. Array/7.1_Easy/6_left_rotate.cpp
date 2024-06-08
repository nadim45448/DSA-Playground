#include<bits/stdc++.h>
using namespace std;
void leftRotate(int arr[], int n)
{
    //left rotate by 1 place
    int temp=arr[0];
    for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    // tc: O(n)
    // space used to solve the problem: O(n) [what is the space use in this algorithm? ]
    // extra space: O(1)
}
void display(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[5]={1, 2, 3, 4, 5};
    cout<<"Before left rotation:";
    display(arr, 5);
    leftRotate(arr, 5);
    cout<<"After left rotation:";
    display(arr, 5);
    
    return 0;
}