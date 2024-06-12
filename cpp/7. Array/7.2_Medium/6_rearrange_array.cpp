#include<bits/stdc++.h>
using namespace std;
// varirty 1: positive numbers & negative numbers are equal. arr[] = {1,2,-4,-5}
// brute force
vector<int> rearrangeArray1(vector<int> ar, int n)
{
    vector<int>pos;
    vector<int>neg;
    for(int i=0;i<n;i++)
    {
        if(ar[i]>0)
        {
            pos.push_back(ar[i]);
        }
        else
        {
            neg.push_back(ar[i]);
        }
    }
// Positives on even indices, negatives on odd.
    for(int i=0;i<n/2;i++)
    {
        ar[2*i]=pos[i];
        ar[2*i+1]=neg[i];

    }
    return ar;
}

// optimal
vector<int>rearrangeArrray2(vector<int>ar, int n)
{
   // Define array for storing the ans separately.
    vector<int>ans(n,0);


    // positive elements start from 0 and negative from 1.
    int posIndex=0, negIndex=1;
     
    for(int i=0;i<n;i++)
    {
        // Fill negative elements in odd indices and inc by 2.

        if(ar[i]<0)
        {
            ans[negIndex]=ar[i];
            negIndex+=2;

        }
        // Fill positive elements in even indices and inc by 2.
        else
        {
            ans[posIndex]=ar[i];
            posIndex+=2;
        }
    }
    return ans;

}

// variety 2:positive numbers & negative numbers are not equal. arr[] = {1,2,-4,-5,3,4}
//brute force, no optimal
vector<int>rearrangeArrray3(vector<int>ar, int n)
{
    vector<int> pos;
    vector<int>neg;
    for(int i=0;i<n;i++)
    {
        if(ar[i]<0)
        {
            pos.push_back(ar[i]);
        }
        else
        {
            pos.push_back(ar[i]);
        }
    }
    int posSize=pos.size();
    int negSize=neg.size();

    // more positive element, less negative element
    if(posSize>negSize)
    {
        // equal number of pos & neg element
        for(int i=0;i<negSize;i++)
        {
            ar[2*i]=pos[i];
            ar[2*i+1]=neg[i];
        }

        // remaining positive element
        int index=negSize*2;
        for(int i=negSize;i<posSize;i++)
        {
            ar[index]=pos[i];
            index++;
        }
    }
    // more negative element, less positive elemnt
    else
    {
        // equal number of pos & neg element
        for(int i=0;i<posSize;i++)
        {
            ar[2*i]=pos[i];
            ar[2*i+1]=neg[i];
        }

        // remaining negative element
        // but if pos & neg numbers are equal this will never execute.
        int index=posSize*2;
        
        for(int i=posSize;i<negSize;i++)
        {
            ar[index]=neg[i];
            index++;
        }
    }

}

int main()
{
    int n = 4;
  vector<int> ar {1,2,-4,-5};
  vector<int> ans = rearrangeArray1(ar,n);

    return 0;
}