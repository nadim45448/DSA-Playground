#include <bits/stdc++.h>
using namespace std;
void duplicate(int arr[], int n)
{
    // brute force
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]); // tc-> O(n log n)
    }
    int index = 0;
    for (auto it : st)
    {
        arr[index] = it; // O(n)
        index++;
    }
    cout << index;
    // TC-> O(n log n)+n
    //  sc->O(n)
}

int removeDuplicates(vector<int> &nums)
{
    //optimal
    // leetcode solution 
    //problem no:26 Remove Duplicates from Sorted Array
    // TC: O(n)
    //SC: O(1)
    int k = 0;
    int l = nums.size();
    for (int i = 1; i < l; i++)
    {
        if (nums[k] != nums[i])
        {
            nums[k + 1] = nums[i];
            k++;
        }
    }
    return k + 1;
}

int main()
{
    int arr[7] = {1, 1, 2, 3, 3, 3, 1};
    // duplicate(arr, 7);

    return 0;
}