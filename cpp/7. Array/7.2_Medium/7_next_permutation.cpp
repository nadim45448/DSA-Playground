#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterPermutation(vector<int> &a){
    int n=a.size();

    //step 1: find the break point
    int ind=-1; //break point

    for(int i=n-2;i>=0; i--){
    
        if(a[i]<a[i+1]){
            // index i is the break point
            ind =i;
            break;
        }
    }

    // if break point does not exist
    if(ind==-1){
        // reverse the whole array
        reverse(a.begin(), a.end());
        return a;
    }

    // step 2:  Find the next greater element
    //          and swap it with arr[ind]
    
    for(int i=n-1;i>=ind;i--){
        if(a[i]>a[ind]){
            swap(a[i], a[ind]);
            break;
        }
    }

    // step 3: reverse the right half of the array
    reverse(a.begin()+ind+1, a.end());

    return a;
    
}

int main()
{
    vector<int> A = {2, 1, 5, 4, 3, 0, 0};
    vector<int> ans = nextGreaterPermutation(A);

    cout << "The next permutation is: [";
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << "]";
    return 0;
    
    
}