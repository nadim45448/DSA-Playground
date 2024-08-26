#include<bits/stdc++.h>
using namespace std;
void Set()
{
    // sorted & unique
    set<int>st;
    st.insert(1); //1
    st.insert(5); // 1 5
    st.insert(3); // 1 3 5
    st.insert(5); // 1 3 5

    auto it=st.find(3); // iterator
    auto it=st.find(7); // return st.end() becz there is no 7 in the set

    st.erase(3); //erase 3
    int cnt=st.count(1);// if found return 1, else 0
    // other things are same as vector


}
void multiSet()
{
     // everything is same as set
     // only stores duplicate element also
      multiset<int>ms;
      ms.insert(2);
      ms.insert(2 );
      ms.insert(2); // 1 1 1
      ms.insert(2); // 1 1 1 1
     ms.erase(1); // erase all 1

     int cnt=ms.count(1);//count number of 1

     ms.erase(ms.find(1)); //only a single one erased

    // ms.erase(ms.find(1), ms.find(1)+2);
     
}

void unorderSet()
{
    //same as set
    // not stored in sorted way, rather sort randomly


}
int main()
{
    Set();
    multiSet();
    unorderSet();
    
    return 0;
}