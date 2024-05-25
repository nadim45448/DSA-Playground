#include<bits/stdc++.h>
using namespace std;
void func(int i, int n)
{
    // if(i<1)return;
    // cout<<i<<endl;
    // func(i-1,n);

    //backtracking
    if(i>n)return;
    func(i+1,n);
    cout<<i<<endl;
}
int main()
{
    int n=5;
    //func(n,n);

    //backtracking
    func(1,n);
    return 0;
}