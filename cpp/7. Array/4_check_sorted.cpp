#include<bits/stdc++.h>
using namespace std;
bool check(int arr[], int n)
{
    int prev=arr[0];
    bool ans=true;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<prev)
        {
            ans=false;
        }
        prev=arr[i];
    }
    return ans;
}
int main()
{
    int arr[6]={1,2,3,4,4,6};
    if(check(arr,6))
    {
        cout<<"Sorted";
    }
    else
    {
        cout<<"Not sorted";
    }
    
    return 0;
}