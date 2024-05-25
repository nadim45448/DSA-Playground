#include<bits/stdc++.h>
using namespace std;
void recursion(int i, int n)
{
    // if(i>n)
    // {
    //     return;
    // }
    // cout<<i<<endl;
    // recursion(i+1,n);

    //by backtracking
    if(i<1)return;
    recursion(i-1,n);
    cout<<i<<endl;

}
int main()
{
    int n = 5;
  //recursion(1,n);

  //backtracking
  recursion(n,n);

  
    
    return 0;
}