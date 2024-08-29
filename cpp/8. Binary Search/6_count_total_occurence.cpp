#include<bits/stdc++.h>
using namespace std;
int firstOccurance(vector<int>&ar, int n, int k){
    int low=0, high=n-1;
    int first=-1;
    while (low<=high)
    {
       int mid=(low+high)/2;
       if(ar[mid]==k){
        first=mid;
        high=mid-1;
       }
       else if(ar[mid]<k){
        low=mid+1;
       }
       else high=mid-1;
    }
    return first;
}
int lastOccurance(vector<int>&ar, int n, int k){
int low=0, high=n-1;
    int last=-1;
    while (low<=high)
    {
       int mid=(low+high)/2;
       if(ar[mid]==k){
        last=mid;
        low=mid+1;
       }
       else if(ar[mid]<k){
        low=mid+1;
       }
       else high=mid-1;
    }
    return last;
}
pair<int, int>firstAndLastOccurance(vector<int>&ar, int n, int k){
    int first=firstOccurance(ar, n,k);
    if(first==-1){
        return {-1, -1};
    
    }
    int last=lastOccurance(ar, n, k);
    return {first, last};
}
int count(vector<int>&ar, int n, int k){
    pair<int, int>ans=firstAndLastOccurance(ar, n, k);
    if(ans.first==-1){
        return 0;
    }
    return ans.second-ans.first+1;
}
int main()
{
    
    return 0;
}