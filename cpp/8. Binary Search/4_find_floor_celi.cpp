#include<bits/stdc++.h>
using namespace std;
// celi-> lower bound
int findFloor(int ar[], int n, int x){

	// floor= longest element in the array which is less or equal to x
    int ans=-1;
    int low=0,high=n-1;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if(ar[mid<=x]){
            ans=ar[mid];
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return ans;
    
}
int findCeil(int arr[], int n, int x) {
	int low = 0, high = n - 1;
	int ans = -1;

	while (low <= high) {
		int mid = (low + high) / 2;
		// maybe an answer
		if (arr[mid] >= x) {
			ans = arr[mid];
			//look for smaller index on the left
			high = mid - 1;
		}
		else {
			low = mid + 1; // look on the right
		}
	}
	return ans;
}
pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	int f = findFloor(arr, n, x);
	int c = findCeil(arr, n, x);
	return make_pair(f, c);
}
int main()
{
   int arr[] = {3, 4, 4, 7, 8, 10};
	int n = 6, x = 5;
	pair<int, int> ans = getFloorAndCeil(arr, n, x);
	cout << "The floor and ceil are: " << ans.first
	     << " " << ans.second << endl;
    
    return 0;
}