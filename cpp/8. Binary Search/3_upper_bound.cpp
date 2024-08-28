#include<bits/stdc++.h>
using namespace std;
int upperBound(vector<int>ar, int n, int x){
    //return upper_bound(ar.begin(), ar.end(),x)-ar.begin();

    int low=0, high=n-1;
    int ans=n;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if(ar[mid]>x){
            ans=mid;
            high=mid-1;
        }
        else{
            mid=low+1;
        }
    }
    return ans;
    
}
int main()
{
        vector<int> arr = {2, 4, 8, 15, 17};
    int n = 5, x = 9;
    int ind = upperBound(arr, n, x);
    cout << "The lower bound is the index: " << ind << "\n";
    
    return 0;
}