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
   for(int i=0;i<=n-1;i++)
       {
        int j=i;
        while (j>0 && arr[j-1]>arr[j])
        {
            swap(arr[j-1], arr[j]);
            j--;
        }
        
           
       }
        
        cout<<"swap"<<endl;  
    
    
    cout<<endl<<"After insertion sort:";
    PrintArray(arr,n);
    cout<<endl;
}
