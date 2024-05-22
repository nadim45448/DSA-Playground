/*
Input Format: N = 3
Result: 
*****  [0space, 5star, 0space] 
 ***   [1space, 3star, 1space] 
  *    [2space, 1star, 2space]
  * star: 2n-(2i+1)
  
*/

#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    for(int i=0;i<n;i++)
        {
           //space
            for(int j=0;j<i;j++)
            {
                cout<<" ";
            }
            //star
            for(int j=0;j<2*n-(2*i+1);j++ )
            {
                cout<<"*";
            }
            //space
             for(int j=0;j<i;j++)
            {
                cout<<" ";
            }
            cout<<endl;
        }
}
int main()
{
    int n;
    cin>>n;
    print(n);
    
    return 0;
}