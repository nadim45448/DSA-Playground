#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int max_number=0;

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
    //int hash[13]={0}; //assume max elemnt in the array is 12
    int s=max_number+1;
    int hash[s]={0};
    //pre compute
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]+=1;
        
        
    }
   
    int q;
    cin>>q;
  while (q--)
  {
        int num;
        cin>>num;
        if(num>max_number)
        {
            cout<<0<<endl;
        }
        else

        cout<<hash[num]<<endl;
  }
  
    
    
    return 0;
}