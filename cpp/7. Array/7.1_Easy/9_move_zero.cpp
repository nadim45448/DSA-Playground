// shift all 0 to right
#include<bits/stdc++.h>
using namespace std;
void move(int ar[], int n)
{
    int j=-1;
    for(int i=0;i<n;i++) //O(x)
    {
        if(ar[i]==0)
        {
            j=i;
            break;
        }
    }
    if(j==-1)
    {
        return ;
    }
    for(int i=j+1;i<n;i++) //O(n-x)
    {
        if(ar[i]!=0)
        {
            swap(ar[i], ar[j]);
            j++;

        }
    }
   // O(n)+O(n-x)=O(n)
  
   // return ar;
}
int main()
{
    //  vector<int> ar = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    // int n = ar.size();
    // vector<int> result = move(ar, n);

    int ar[10]={1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    move(ar,10);
    for(int i=0;i<10;i++)
    {
        cout<<ar[i]<<" ";
    }
    

 
   
    return 0;
}