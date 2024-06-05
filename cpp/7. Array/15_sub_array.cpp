#include <bits/stdc++.h>
using namespace std;
int getLongestSubarray(vector<int> &arr, int k)
{
    // better approach
    long long sum = 0;
    int maxLen = 0;
    long long rem = 0;
    map<long long, int> preSumMap;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }
        rem = sum - k;
        if (preSumMap.find(rem) != preSumMap.end())
        {
            int len = i = preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if (preSumMap.find(sum) == preSumMap.end())
        {
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}


//optimal
int longestsubArray(vector<int> &a, long long k)
{
    int left = 0;
    int right = 0;
    long long sum = a[0];
    int len = 0;
    int n = a.size();
    while (right < n) //O(n)
    {
        while (left<=right && sum>k)
        {
            sum-=a[left];
            left++;
        }
        if(sum==k)
        {
            len=max(len, right-left+1);
        }
        
        right++;
        if (right < n)
        {
            
            sum += a[right];
        }
        return len;
    }
    //tc: O(2n)
    //sc: O(1)
}
int main()
{
    // brute force: use 2 for loop: tc:O(n^2)

    return 0;
}