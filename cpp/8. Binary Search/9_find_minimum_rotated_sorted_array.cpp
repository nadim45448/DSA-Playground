#include <bits/stdc++.h>
using namespace std;
int findMin(vector<int> &ar)
{

    int low = 0, high = ar.size() - 1;
    int ans = INT_MAX;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        // search space is already sorted
        //  then always arr[low] will be smaller
        //  in that search space
        if (ar[low] <= ar[high])
        {
            ans = min(ans, ar[low]);
            break;
        }
        // if left part is sorted
        if (ar[low] <= ar[mid])
        {

            // keep the minimum
            ans = min(ans, ar[low]);
            // Eliminate left half
            low = mid + 1;
        }
        else
        // if right part is sorted:
        {
            // keep the minimum:
            ans = min(ans, ar[mid]);
            // Eliminate right half:
            high = mid - 1;
        }
    }
    return ans;
}
int main()
{

    return 0;
}