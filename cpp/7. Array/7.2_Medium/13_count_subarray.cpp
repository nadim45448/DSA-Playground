#include<bits/stdc++.h>
using namespace std;
int findAllSubarraysWithGivenSum(vector<int>&ar, int k){
    int n=ar.size();

    unordered_map<int, int>mp;
    mp[0]=1; // setting 0 in the map

    int preSum=0, cnt=0;
    for(int i=0;i<n;i++){
        preSum+=ar[i];
        int remove=preSum-k;
        cnt+=mp[remove];
        mp[preSum]+=1;
    }
    return cnt;


}
int main()
{
     vector arr = {3, 1, 2, 4};
    int k = 6;
    int cnt = findAllSubarraysWithGivenSum(arr, k);
    cout << "The number of subarrays is: " << cnt << "\n";
    return 0;
}
