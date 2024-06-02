#include<bits/stdc++.h>
using namespace std;
void bruteForce(int arr[], int n)
{
    if(n==0 || n==1)
    {
        cout<<" No sewcond largest elelment";
        return;

    }
    sort(arr,arr+n); //O(log N)
   
     
    int largest=arr[n-1]; 

    int second_largest=0;
    for(int i=n-2;i>=0;i--)  //O(N)
    {
        if(arr[i]!=largest)
        {
            second_largest=arr[i];
            break;
        }
    }
    cout<<"Second largest elemnt:"<<second_largest;
    //Time complexxity: o(N log N)
   
}

void better(int arr[], int n)
{
    int largest=INT_MIN;
    for(int i=0;i<n;i++) //O(N)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    int second_largest=-1;
    for(int i=0;i<n;i++) //O(N)
    {
        if( arr[i]>second_largest && arr[i]!=largest)
        {
            second_largest=arr[i];
        }
    }
    cout<<"Second largest elemnt:"<<second_largest;
    //TC-> O(2N)
}

void optimal(int arr[], int n)
{
    int largest=arr[0];
    int sLargest=INT_MIN;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            sLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>sLargest)
        {
            sLargest=arr[i];
        }
    }
    cout<<"Second Largest elemnt:"<<sLargest;
}
int main()
{
    int arr[6]={4,7,9,8,1,3};
    //bruteForce(arr, 6); // brute force approach
    //better(arr,6);
    optimal(arr, 6);
    
    
    
    
    return 0;
}