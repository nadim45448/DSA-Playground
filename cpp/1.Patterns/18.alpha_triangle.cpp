/*
Input Format: N = 3
Result: 
C
B C
A B C
*/
#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    for(int i=0;i<n;i++)
    {
          for(char ch='E'-i;ch<='E';ch++)
          {
            cout<<ch<<" ";
          }
            
            cout<<endl;
    }
}
int main()
{
  
    print(5);
    
    return 0;
}