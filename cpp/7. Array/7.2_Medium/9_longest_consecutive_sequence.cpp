#include<bits/stdc++.h>
using namespace std;

// brute force
// bool linearSearch(vector<int>&a, int num) // O(N)
// {
//     int n=a.size();
//     for(int i=0;i<n;i++){
    
//         if(a[i]==num){
//             return true;
//         }
//     }
//     return false;
// }
// int longestSuccessiveElements(vector<int>&a){
//     int n=a.size();
//     int longest=1;
//     for(int i=0; i<n; i++){ //O(N)
//         int x=a[i];
//         int cnt=1;
//         while(linearSearch(a,x+1)==true){
//             x+=1;
//             cnt+=1;
//         }
//         longest=max(longest, cnt);
//     }
//     return longest;
//     //O(n*2)
// }

// better approach
// O(n log n + n)
// int longestSuccessiveElements(vector<int>&a){
//     int n=a.size();
//     if(n==0) return 0;

//     sort(a.begin(), a.end());
//     int last_smaller=INT_MIN;
//     int cnt=0;
//     int longest=1;

//     // find the longest sequence
//     for(int i=0;i<n;i++){
//         if(a[i]-1==last_smaller){
//             //a[i] is the next element of the
//             //current sequence.
//             cnt+=1;
//             last_smaller=a[i];
//         }
//         else if(a[i]!=last_smaller){
//             cnt=1;
//             last_smaller=a[i];
//         }
//         longest=max(longest, cnt);
//     }
//     return longest;


// }

//optimal approach

int longestSuccessiveElements(vector<int>&a){
    int n=a.size();
    if(n==0) return 0;

    int longest=1;
    unordered_set<int>st;
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }

    //Find the longest sequence:
    for(auto it:st){
         //if 'it' is a starting number:
         if(st.find(it-1)==st.end()){
             //find consecutive numbers:
             int cnt=1;
             int x=it;
             while (st.find(x+1)!=st.end())
             {
                x=x+1;
                cnt+=1;
             }
             longest=max(longest, cnt);
             
         }

    }

    return longest;

}

int main()
{
    vector<int> a = {100, 200, 1, 2, 3, 4};
    int ans = longestSuccessiveElements(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    
    return 0;
}