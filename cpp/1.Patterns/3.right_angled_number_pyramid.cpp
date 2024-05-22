/* Input Format: N = 3
Result: 
1
1 2 
1 2 3
Input Format: N = 5
Result:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
   for(int i=0;i<n;i++)
       {
           for(int j=0;j<=i;j++)
           {
               cout<<j+1<<" ";
              
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
