#include<iostream>
using namespace std;
void PrintArray(int ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }


}
int main()
{
    int n;
    cout<<"Array size:";
    cin>>n;
    int arr[n];
    cout<<"enter array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Before Bubble sort:";
    PrintArray(arr,n);
    cout<<endl;

    //implementation
    for(int i=n-1;i>=0;i--)
    {
        int didSwap=0; //for optimization 1 2 3 4 5 6
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                didSwap=1;
            }

        }
        if(didSwap==0)
        {
            break; // if there is no swap happens that's means array is already sorted.
                    // we don't need check anymore
        }
        cout<<"swap"<<endl;  
    }
    
    //cout<<endl<<"After bubble sort:";
    PrintArray(arr,n);
    cout<<endl;
}
