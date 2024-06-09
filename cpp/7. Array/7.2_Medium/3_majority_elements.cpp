#include<bits/stdc++.h>
using namespace std;
int bruteforce(vector<int>&ar, int n)
{
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(ar[i]==ar[j])
            {
                cnt++;
            }
        }
        if(cnt>(n/2))
        {
            return ar[i];
        }
    }
    return -1;
}

int better(vector<int>&ar, int n)
{
    map<int, int> mp;
    for(int i=0;i<n;i++)
    {
        mp[ar[i]]++;
    }

    for(auto it: mp)
    {
        if(it.second>(n/1))
        {
            return it.first;
        }
    }
    return -1;
}

int optimal(vector<int>&ar, int n)
{
    int cnt=0;
    int el;
    for(int i=0;i<n;i++)
    {
        if(cnt==0)
        {
            cnt=1;
            el=ar[i];
           
        }
        else if(el==ar[i])
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
    int cnt1=0;
    for(int i=0;i<n;i++)
    {
        if(el==ar[i])
        {
            cnt1++;
        }
        if(cnt1>(n/2))
        {
            return el;
        }

    }
    return -1;
    //TC: O(N)+O(N) 
    // 2nd O(N)-> if majority elements occurs

}

int main()
{
    vector<int>ar(9);
    ar={1,5,5,5,2,2,1,5,5};
    //function call

    
    return 0;
}