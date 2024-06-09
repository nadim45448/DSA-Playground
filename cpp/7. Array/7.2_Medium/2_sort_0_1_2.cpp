//Sort an array of 0s, 1s and 2s
#include<bits/stdc++.h>
using namespace std;
//better approach
void betterSort(vector<int> &ar, int n)
{
    int cnt0=0;
    int cnt1=0;
    int cnt2=0;
    for (int i=0;i<n;i++)
    {
        if(ar[i]==0)
        {
            cnt0++;
        }
        else if(ar[i]==1)
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
    }

    for(int i=0;i<cnt0;i++)
    {
        ar[i]=0;
    }
    for(int i=cnt0;i<cnt0+cnt1;i++)
    {
        ar[i]=1;
    }
    for(int i=cnt0+cnt1;i<n;i++)
    {
        ar[i]=2;
    }

    //TC: O(2n)
    //SC:O(1)
}

// optimal

void optimalSort(vector<int>&ar, int n)
{
    int low=0;
    int mid=0;
    int high=n-1;
    while (mid<=high)
    {
       if(ar[mid]==0)
       {
            swap(ar[low], ar[mid]);
            low++;
            mid++;
       }

       else if(ar[mid]==1)
       {
            mid++;
       }
       else
       {
            swap(ar[mid], ar[high]);
            high--;
       }

       //TC: O(n)
       //SC: O(1)
    }
    

}
int main()
{
    vector<int>ar(9);
    ar={1,0,1,2,2,0,2,1,0};

    //betterSort(ar, 9);
    optimalSort(ar,9); // dutch national flag algorithm
    for(auto i: ar)
    {
        cout<<i<<" ";
    }
    return 0;
}