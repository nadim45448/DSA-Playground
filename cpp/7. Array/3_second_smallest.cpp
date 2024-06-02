#include<bits/stdc++.h>
using namespace std;
void secondSmallest(int arr[], int n)
{
    int smallest=arr[0];
    int sSmallest=INT_MAX;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            sSmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]>smallest && arr[i]<sSmallest)
        {
            smallest=arr[i];
        }
        
    }
    cout<<"scond smallest element:"<<smallest;
    
}
int main()
{
     int arr[6]={4,7,9,8,1,3};
     secondSmallest(arr, 6);
    
    return 0;
}