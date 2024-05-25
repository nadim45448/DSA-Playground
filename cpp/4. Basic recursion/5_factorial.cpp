#include<bits/stdc++.h>
using namespace std;
int func(int n)
{
    if(n==0)return 1;
    return n*(n-1);
}
int main()
{
   cout<< func(5);
    
    return 0;
}