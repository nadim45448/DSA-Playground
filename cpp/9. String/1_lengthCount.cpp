#include<bits/stdc++.h>
using namespace std;
int main()
{
    // using char arry
    // char str[100];
    int count = 0;
    cout<<"Enter a string: ";
    // cin.getline(str, 100);
    // // cout<<str;

    // while (str[count]!='\0')
    // {
    //     count++;
    // }
    // cout<<count;

    // using string keyword
    string str ;
    getline(cin, str);
    
    for(char ch:str){
        count++;
    }
    cout<<count;
    
    return 0;
}