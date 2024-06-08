#include<bits/stdc++.h>
using namespace std;
vector<int> sortedArray(vector<int>a, vector<int>b)
{
    int n1=a.size();
    int n2=b.size();
    /*
    //brute force
    set<int>st;
    for(int i=0;i<n1;i++) // n1 logn
    {
        st.insert(a[i]);

    }
     for(int i=0;i<n2;i++) // n2 logn
    {
        st.insert(b[i]);

    }
    vector<int>tmp;
    for(auto i: st) //O(n1+n2)
    {
        tmp.push_back(i);
    }
    return tmp; //O(n1+n2)
    //TC: O(n1log n + n2log n)+O(n1+n2)
    //SC: O(n1+n2)+O(n1+n2)
    */

   // optimal
   int i=0;
   int j=0;
   vector<int>unionAr;
   while (i<=n1 && j<=n2)
   {
        if(a[i]<=b[j])
        {
            if(unionAr.size()==0 || unionAr.back() != a[i])
            {
                unionAr.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if(unionAr.size()==0 || unionAr.back() != b[i])
            {
                unionAr.push_back(b[i]);
            }
            j++;
        }
    
   }
   while (i<n1)
   {
        if(unionAr.size()==0 || unionAr.back() != a[i])
            {
                unionAr.push_back(a[i]);
            }
            i++;
   }
   while (j<n2)
   {
        if(unionAr.size()==0 || unionAr.back() != b[i])
            {
                unionAr.push_back(b[i]);
            }
            j++;
   }
   return unionAr;
   
   
   
}

int main()
{
    vector<int>a={1,1,2,3,4,5};
    vector<int>b{2,3,4,4,5,6};
    vector<int>res=sortedArray(a,b);
    for(auto i: res)
    {
        cout<<i<<" ";
    }
    return 0;
}