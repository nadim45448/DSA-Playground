#include<bits/stdc++.h>
using namespace std;
int floorSqrtInt(int n){
    int low=1, high=n;
    int ans;
    while (low<=high)
    {
        long long mid=(low+high)/2;
        long long val=mid*mid;
        if(val<=n){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    // ans==high. so return any of them
    return ans;
    
}
int main()
{
    
    return 0;
}