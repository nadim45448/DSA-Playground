#include<bits/stdc++.h>
using namespace std;
void Vector()
{
    vector<int>v;
    v.push_back(2);
    v.emplace_back(3);
    

    // vector as pair
    vector<pair<int,int>>p;
    p.push_back({1,2});
    p.emplace_back(1,2);

    //declare size
    vector<int>v1(5); // 0 0 0 0 0
    vector<int>v2(5,20); // 20 20 20 20 20
    vector<int>v3(v2); //20 20 20 20 20

    //access element
    //cout<<v2[0]<<" "<<v3.at(2)<<endl;
    //cout<<v2.back();

    //iterator
    vector<int>v4={5,7,8,2,9};
    vector<int> ::iterator it=v4.begin();
    vector<int>::iterator it=v4.end();
    // vector<int>::iterator it=v4.rend();
    // vector<int>::iterator it=v4.rbegin();

    cout<<*(it)<<" ";
    it++;
    cout<<*(it)<<" ";
    it+=2;
    cout<<*(it)<<" ";

    //access all element
    //1st way
    for(vector<int> ::iterator it=v4.begin();it!=v4.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;

    //2nd way
    for(auto it=v4.begin();it!=v4.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;

    //3rd way
    for(int i:v4)  //we can replace int by auto
    {
        cout<<i<<" ";
    }

    //erase
    //{5 7 8 2 9}
    v4.erase(v4.begin()+1); // 5 8 2 9
    v4.erase(v4.begin()+2,v4.begin()+4); // 5 7 9 [start, end)
    

    //insert
    vector<int>v5(2,50); // 50 50
    v5.insert(v5.begin(),100);// 100 50 50
    v5.insert(v5.begin()+2,2,10); //100 50 10 10 50
    
    //copy
    vector<int>copy(2,15); // 15 15
    v5.insert(v5.begin(),copy.begin(),copy.end()); // 15 15 100 50 10 10 50
    cout<<v5.size();// 7
    v5.pop_back();//15 15 100 50 10 10

    //swap
    // v1(10,20) v2(30,40)
    //v2.swap(v1) // v1(30,40) v2(10,20)
    v5.clear();// erase everything
    cout<<v5.empty();
    
   
    
    

    

   
    





}
int main()
{
    Vector();
    
    return 0;
}