#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>ar, int N)
{
    int xor1=0;
    int xor2=0;
    int n=N-1; //iindex=N-1
    for(int i =0;i<n;i++)
    {
        xor1=xor1^ar[i];
        xor2=xor2^(i+1);
    }
    xor1=xor1^N;
    return xor1^xor2;
}
int main()
{
    int ar[5]={1,2,4,5};
    int n=5;
    int sum=(n*(n+1))/2;
    int s=0;
    for(int i=0;i<5-1;i++)
    {
        s+=ar[i];
    }
    cout<<sum-s;

    // both approach are optimal
    // tc: O(n)

    return 0;
}