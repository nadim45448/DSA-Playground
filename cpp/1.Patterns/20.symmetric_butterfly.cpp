/*
Input Format: N = 3
Result: 
*    *
**  **
******
**  **
*    *
*/
#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    int space=2*n-2;
    for(int i=1;i<=2*n-1;i++)
    {
        int star=i;
        if(i>n)
        {
            star=2*n-i;
        }
        //star
        for(int j=1;j<=star;j++)
        {
            cout<<"*";

        }
        //space
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        //star
          for(int j=1;j<=star;j++)
        {
            cout<<"*";

        }
        cout<<endl;
        if(i<n)space-=2;
        else space+=2;
    }
}
int main()
{
    int n;
    cin>>n;
    print(n);
    return 0;
}