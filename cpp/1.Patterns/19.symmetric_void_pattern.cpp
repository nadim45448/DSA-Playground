/*Input Format: N = 3
Result: 
******
**  **
*    *
*    *
**  **
******
*/
#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    int initialSpace=0;
    for(int i=0;i<n;i++)
    {
        //star
        for(int j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
        //space
        for(int j=0;j<initialSpace;j++)
        {
            cout<<" ";
        }
        //star
        for(int j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        initialSpace+=2;
    }
    initialSpace=2*n-2;
    for(int i=1;i<=n;i++)
    {
        
        //star
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        //space
        for(int j=0;j<initialSpace;j++)
        {
            cout<<" ";
        }
        //star
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        initialSpace-=2;
    
    }
    
}
int main()
{
    int n;
    cin>>n;
    print(n);
    
    return 0;
}