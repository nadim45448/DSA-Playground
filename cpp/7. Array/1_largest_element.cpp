#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Brute force
        //-sort the array. TC->O(N logN)
        //last index is the largest value

    //optimal O(N)
    int arr[6]={4,7,2,9,3,1};
    int largest=arr[0];
    for(int i=0;i<6;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    cout<<"Largest element:"<<largest;
    
    return 0;
}