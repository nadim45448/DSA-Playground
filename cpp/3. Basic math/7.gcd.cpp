#include<bits/stdc++.h>
using namespace std;
int findGCD(int n1, int n2)
{
    while (n1>0 && n2>0)
    {
        if(n1>n2)
        {
            n1%=n2;
        }
        else
            n2%=n1;
    }
    if(n1==0)
    {
        return n2;
    }
    return n1;
    
}
int main()
{
    int n1 = 20, n2 = 15;
    
    // Find the GCD of n1 and n2
    int gcd = findGCD(n1, n2);

    cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;

    return 0;
}