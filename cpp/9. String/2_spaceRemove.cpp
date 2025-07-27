#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    // using an extra string.....
    // string noSpace="";
    // for(char ch: str){
    //     if(ch!=' '){
    //         noSpace+=ch;
    //     }
    // }
    // cout<<noSpace;

    // inplace string
    int j =0;
    for(int i =0; str[i]!='\0'; i++){
        if(str[i] != ' '){
            str[j] = str[i];
            j++;
        }
    }
    cout<<str;
    return 0;
}