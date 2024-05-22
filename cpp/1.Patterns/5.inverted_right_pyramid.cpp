/*
Input Format: N = 3
Result: 
* * *
* * 
*
*/
#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
   /*
   //1st way
    for(int i=n;i>0;i--)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }*/

    //2nd way
    for(int i=0;i<n;i++)
        {
            for(int j=n;j>i;j--)
            {
                cout<<"* ";
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