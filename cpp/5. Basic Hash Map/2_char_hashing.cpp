#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int hash[26]={0}; // for any type of char: hash[256]
    //pre compute
    for(int i=0;i<s.size();i++)
    {
        hash[s[i]-'a']++; //for any type of char:hash[s[i]]++
        
    }
    int q;
    cin>>q;
  while (q--)
  {
        char c;
        cin>>c;
        //fetch
        cout<<hash[c-'a']<<endl;
  }
  
    
    
    return 0;
}