// kadane's algorithm
#include<bits/stdc++.h>
using namespace std;
// better
int maxSubArraySum(int arr[], int n)
{
    int maxi=LONG_MIN;

    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            
            sum+=arr[j];
            
            maxi=max(maxi, sum);
        }
    }
    return maxi;
}

//optimal without prpint the arrray
long long maxSubarraySum(int arr[], int n)
{
    long long sum=0;
    long long maxi=LONG_MIN;

    
    
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum>maxi)
        {
            maxi=sum;
        }
        if(sum<0)
        {
            sum=0;
        }

    }
    return maxi;
}

// optimal with print the array
long long printMaxSubarraySum(int arr[], int n)
{
    long long sum=0;
    long long maxi=LONG_MIN; //maximum sum

    // to print the subarray
    int start=0;
    int ansStart=-1, ansEnd=-1;
    for(int i=0;i<n;i++)
    {
        if(sum==0)
        {
            start=i; // starting index
        }
        sum+=arr[i];

        if(sum>maxi)
        {
            maxi=sum;

            ansStart=start;
            ansEnd=i;
        }
        if(sum<0)
        {
            sum=0;
        }

    }

    // printing the subarray
    cout << "The subarray is: [";
    for (int i = ansStart; i <= ansEnd; i++) {
        cout << arr[i] << " ";
    }
    cout << "]n";

     // To consider the sum of the empty subarray
    // uncomment the following check:

    //if (maxi < 0) maxi = 0;
    return maxi;
}
int main()
{
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxSum = maxSubarraySum(arr, n);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}