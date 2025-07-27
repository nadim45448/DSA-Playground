#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string: ";
    getline(cin, str);

    // count length
    // int count = 0;
    // for (char ch: str){
    //     count++;
    // }

    // using for loop...........
    // for(int i =0; i<count/2; i++){
    //     char temp = str[i];
    //     str[i] = str[count -i -1];
    //     str [count-i-1] =temp;
    // }


    // using while loop
    int start =0;
    int end =0;

    while (str[end] != '\0')
    {
        end++;
    }
    end --;
    while (start<end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start ++;
        end --;
    }
    
    

    cout<<str;
    
    return 0;
}