#include<bits/stdc++.h>
using namespace std;
void Frequency(int arr[], int n)
{
    unordered_map<int, int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    int max_frequency=0,min_frequency=n;
    int max_element,min_element=0;
    for(auto it:mp)
    {
        int count=it.second;
        int element=it.first;
        //cout<<element<<" "<<count<<endl;
        if( count>max_frequency)
        {
            max_frequency=count;
            max_element=element;
        }
         if( count<min_frequency)
        {
            min_frequency=count;
            min_element=element;
        }
    }
     cout << "The highest frequency element is: " << max_element << "\n";
    cout << "The lowest frequency element is: " << min_element << "\n";
    

}
int main()
{
   /*neive approach, not much effective
    int n;
    int max_number=INT_MIN;

    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i]>max_number)
        {
            max_number=arr[i]; //1 
        }
       
    }
   

  
    int s=max_number+1;
    int hash[s]={0};
    //pre compute
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]+=1;
        
        
    }
   
  // Find the element with the highest frequency
    // int highest_freq = 0;
    // int element_with_highest_freq = 0;

    // for (int i = 0; i < s; i++) {
    //     if (hash[i] > highest_freq) {
    //         highest_freq = hash[i];
    //         element_with_highest_freq = i;
    //     }
    // }

    // cout << element_with_highest_freq << endl;

    // Find the element with the lowest non-zero frequency
    int lowest_freq = INT_MAX;
    int element_with_lowest_freq = -1;

    for (int i = 0; i <s; i++) {
        if (hash[i] > 0 && hash[i] < lowest_freq) {
            lowest_freq = hash[i];
            element_with_lowest_freq = i;
        }
    }

    if (element_with_lowest_freq != -1) {
        cout << element_with_lowest_freq << endl;
    } else {
        cout << "No valid element found." << endl;
    } */

  //optimize approach using unordered_map
 int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    //Frequency(arr, n);
   
  
    
    
    return 0;
}