#include<bits/stdc++.h>
using namespace std;
void List()
{
    list<int>ls;
    ls.push_back(5);
    ls.emplace_back(0);

    ls.push_front(8);
    ls.emplace_front(10);

    // rest of the functions are same as vector
    // begin, end, rbegin, rend, insert,clear,size,swap.....


}
void Dequeu()
{
    deque<int>dq;
    dq.push_back(5); //5
    dq.emplace_back(1); //5 1

    dq.push_front(0); // 0 5 1
    dq.emplace_front(10); // 10 0 5 1

    dq.pop_back(); // 10 0 5
    dq.pop_front(); // 0 5

    dq.back();
    dq.front();

    //rest of the functions are same as vector
}
void Stack()
{
    // LIFO-> Last in First Out
    stack<int>st,s;
    st.push(1); // 1
    st.push(2); // 2 1
    st.push(4); // 4 2 1
    st.push(9); //9 4 2 1
    st.push(3); //3 9 4 2 1
    st.push(8); // 8 3 9 4 2 1
    st.emplace(6); // 6 8 3 9 4 2 1
    
    st.top();// 6
    st.pop(); // 8 3 9 4 2 1
    st.top(); // 8
    st.empty(); //false ->0
    st.size();
    s.swap(st);
}
void Queue()
{
    // similar as stack but follow FIFO ->First in First Out

    queue<int>q;
    q.push(1); //1
    q.push(2); // 1 2
    q.push(10);// 1 10 2

    q.pop(); // 10 2
    q.front(); // 10
    q.back(); // 2
}
void priorityQueue()
{
    priority_queue<int>pq;
    pq.push(5); //5
    pq.push(2); //5 2
    pq.push(7); //7 5 2
    pq.push(1); //7 5 2 1

    pq.top(); // 7
    pq.pop(); // 5 2 1
    // size, swap, empty functions same as others

    // minimum heap
    priority_queue<int, vector<int>, greater<int>>p;
    p.push(5); //5
    p.push(2); // 2 5
    p.push(9); // 2 5 9
    p.top();
}
int main()
{
    List();
    Dequeu();
    Stack();
    Queue();
    return 0;
}