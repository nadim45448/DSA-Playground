#include<bits/stdc++.h>
using namespace std;
bool palindrome(int x)
{
    int copy=x;
    int rev=0;
    while (x>0)
    {
        int ld=x%10;
        rev=(10*rev)+ld;
        x/=10;
    }
    if (rev==copy)
    return true;
    else
    return false;

    
    
    
}
int main()
{
     int n;
  cout<<"Enter number:";
  cin>>n;
  bool ans=palindrome(n);
  if(ans)
  cout<<n<<" is palindrome";
  else
  {
    cout<<n<<" is not palindrome";
  }
  
    
    return 0;
}