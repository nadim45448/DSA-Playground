#include<bits/stdc++.h>
using namespace std;
void Map()
{
    map<int, int>m;
    //map<int, pair<int, int>>m2;
    //map<pair<int, int>, int>m3;

    m[1]=2;
    m.emplace(4,1);
    m.insert({2,4});
    m.insert({3,4});

    //m3[{2,3}]=10;
    
    for(auto it :m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    //cout<<m[1]<<" ";
    //cout<<m[7]; //0

    auto it=m.find(3);
    cout<<(it)->second;

    //erase,swap,size,empty same as others


}
void multiMap()
{
    // same a map
    //it can store multiple keys
    // map[key] cannot be used here
}

void unorderMap()
{
    // same as set and unorder set difference
    
}
int main()
{
    Map();
    return 0;
}