#include <bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int> &A, int n, vector<int> &B, int m)
{
    vector<int> ans;

    // brute force
    /*int visi[m]={0};
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<m;j++)
         {
             if(A[i]==B[j] && visi[j]==0)
             {
                 ans.push_back(A[i]);
                 visi[j]=1;
                 break;
             }
             if(B[j]>A[i])
             {
                 break;;
             }
         }
     }
      //tc:O(n1 *n2)
     //sc: O(n2)
 */

    //optimal
    int i=0;
    int j=0;
    while (i<n && j<m)
    {
        if(A[i]<B[j])
        {
            i++;
        }
        else if(B[j]<A[i])
        {
            j++;
        }
        else
        {
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }
    
    return ans;
}
int main()
{

    return 0;
}