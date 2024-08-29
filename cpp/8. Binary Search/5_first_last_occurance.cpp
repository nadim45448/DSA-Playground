#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findLowerBound(vector<int> nums, int target)
    {
        return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    }
    int findUpperBound(vector<int> nums, int target)
    {
        return upper_bound(nums.begin(), nums.end(), target) - nums.begin();
    }
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int n = nums.size();
        int lb = findLowerBound(nums, target);
        if (lb == n || nums[lb] != target)
        {
            return {-1, -1};
        }
        return {lb, findUpperBound(nums, target) - 1};
    }
};

// raw binary search 
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
int main()
{

    return 0;
}