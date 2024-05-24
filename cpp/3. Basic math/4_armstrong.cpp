#include<bits/stdc++.h>
using namespace std;
bool armstrong(int x)
{
    int copy=x;
    int rev=0;
    int sum=0;
    while (x>0)
    {
        int ld=x%10;
        sum=sum+(ld*ld*ld);
        rev=(10*rev)+ld;
        x/=10;
    }
    if (sum==copy)
    return true;
    else
    return false;

    
    
    
}
int main()
{
     int n;
  cout<<"Enter number:";
  cin>>n;
  bool ans=armstrong(n);
  if(ans)
  cout<<n<<" is armstrong";
  else
  {
    cout<<n<<" is not armstrong";
  }
  
    
    return 0;
}