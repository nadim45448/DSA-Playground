/*
Input Format: N = 3
Result: 
  *  [2 space, 1 star, 2 space] 
 *** [1 space, 3 star, 1 space]
*****[0 space, 5 star, 0 space]
for space, n-i-1=3-0-1=2 
           n-i-1=3-1-1=1
star increasing 2 in each step:2*i+1
*/ 
#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    for(int i=0;i<n;i++)
        {
            //space
            for(int j=0;j<n-i-1;j++)
            {
                cout<<" ";
            }
            //star
            for(int j=0;j<2*i+1;j++ )
            {
                cout<<"*";
            }
            //space
             for(int j=0;j<n-i-1;j++)
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