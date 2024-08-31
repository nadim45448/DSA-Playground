#include <bits/stdc++.h>
using namespace std;
int findMin(vector<int> &ar)
{
    // ans=find the minimum value index.
    //concept of previous problem

    int low = 0, high = ar.size() - 1;
    int ans = INT_MAX;
    int index = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        // search space is already sorted
        // then always arr[low] will be smaller
        // in that search space
        if (ar[low] <= ar[high])
        {
            if (ar[low] < ans)
            {
                ans = ar[low];
                index = low;
            }

            break;
        }
        // if left part is sorted
        if (ar[low] <= ar[mid])
        {
            if (ar[low] < ans)
            {
                ans = ar[low];
                index = low;
            }

            // Eliminate left half
            low = mid + 1;
        }
        else
        // if right part is sorted:
        {
            if (ar[mid] < ans)
            {
                ans = ar[mid];
                index = mid;
            }

            // Eliminate right half:
            high = mid - 1;
        }
    }
    return index;
}
int main()
{

    return 0;
}