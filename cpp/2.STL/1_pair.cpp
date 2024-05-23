#include<bits/stdc++.h>
using namespace std;
void Pair()
{
    //same data type
    pair<int, int>p={5,8};
    cout<<p.first<<" "<<p.second<<endl;

    //pair of int & pair
    pair<int, pair<int, int>>pp={1,{4,5}};
    cout<<pp.first<<endl;
    cout<<pp.second.first<<" "<<pp.second.second<<endl;

    //pair of int & array
    pair<int, int>arr[]={{1,2}, {5,6}, {9,10}};
    cout<<arr->first;
    cout<<arr[0].first<<" "<<arr[0].second<<endl;
    cout<<arr[0].first<<" "<<arr[1].second<<endl;

    //taking input
    pair<int, int>input;
    cin>>input.first>>input.second;
    cout<<input.first<<" "<<input.second<<endl;

    //different data type
    pair<int, char>pt;
    pt.first=8;
    pt.second='n';
    cout<<pt.second;

    // pair as a tupple
    pair<int,int>p1(10,20);
    cout<<p1.first;
    
    //another way
    pair<int,char>p2;
    //p2=make_pair(1,'n');
    p2={10,'a'};
    cout<<p2.first<<endl;

}
int main()
{
    Pair();
    
    return 0;
}