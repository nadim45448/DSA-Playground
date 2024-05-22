/*
Input Format: N = 3
Result: 
A
B B
C C C
*/
#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    for(int i=0;i<n;i++)
    {
        char ch='A'+i;
        for(int j=0;j<=i;j++)
        {
            cout<<ch<<" ";
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