#include<bits/stdc++.h>
using namespace std;
int f(int n)
{
    if(n<=1)
    {
        return n;
    }
   int last= f(n-1);
   int first= f(n-2);
   return last+first;
}
int main()
{
    cout<<f(5);
    
    return 0;
}