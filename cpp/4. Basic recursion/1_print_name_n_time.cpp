#include<bits/stdc++.h>
using namespace std;
void recursion(int i, int n)
{
    if(i>n)
    {
        return;
    }
    cout<<"nadim"<<endl;
    recursion(i+1,n);

}
int main()
{
    int n;
    cin>>n;
    recursion(1,n);
    
    return 0;
}