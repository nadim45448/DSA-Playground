// Given an array of N integers. Every number in the array except one appears twice. Find the single number in the array.
#include<bits/stdc++.h>
using namespace std;
int singleNonDuplicate(vector<int>&ar){
    int n=ar.size();
    if(n==1){
        return ar[0];
    }
    if(ar[0]!=ar[1]){
        return ar[0];   
    }
    if(ar[n-1]!=ar[n-2]){
        return ar[n-1];
    }
    int low=1, high=n-1;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if(ar[mid]!=ar[mid-1] && ar[mid]!=ar[mid+1]){
            return ar[mid];
        }

        // we are in left side
        if((mid%2==1 && ar[mid]==ar[mid-1])
        ||(mid%2==0 & ar[mid]==ar[mid+1])){
            low=mid+1;

        }
        else{
            high=mid-1;
        }
    }
    return -1;
    
}
int main()
{
    
    return 0;
}