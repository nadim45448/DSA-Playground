#include<bits/stdc++.h>
using namespace std;
// brute force
string bruteSum(vector<int>ar, int target)
{
    int n=ar.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]+ar[j]==target)
            {
                return"YES";
                // return{i,j}; // return indexes 
            }
        }

    }
    return "NO";

    //TC: O(n^2)
}

//better
//optimal for variety 2
string read(vector<int> ar, int target)
{
    int n=ar.size();
    map<int, int>mp;
    for(int i=0;i<n;i++)
    {
        int a=ar[i];
        int required=target-a;
        if(mp.find(required)!=mp.end())
        {
            return "YES";
            //retun {mp[required], i}
        }
        mp[a]=i;
    }
  return "NO";
  
  //TC: O(N * log N)
  //SC: O(N)
  
}

//optimal-> variety 1
string read(vector<int> ar, int target)
{
    int n=ar.size();
    sort(ar.begin(), ar.end());
    int left=0;
    int right=n-1;
    while (left<right)
    {
        int sum=ar[left]+ar[right];
        if(sum==target)
        {
            return "YES";
        }
        else if(sum<target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return "NO";
}
int main()
{
    //Brute force
    vector<int>ar={2,6,5,8,1,11};
   string ans= bruteSum(ar, 15);
   cout<<ans;
  
    return 0;
}