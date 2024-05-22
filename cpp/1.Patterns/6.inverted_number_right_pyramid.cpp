/*
Input Format: N = 3
Result: 
1 2 3
1 2
1
*/
#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    /*for(int i=n;i>0;i--)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        } */

        for(int i=0;i<n;i++)
            {
                for(int j=n;j>i;j--)
                {
                    cout <<n-j+1<<" ";
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