#include<bits/stdc++.h>
using namespace std;
void learnQueue()
{
    queue<int>q;
    q.push(2);
    q.push(4);
    q.emplace(6);
    cout<<q.size()<<endl;
    cout<<q.back()<<endl;
    cout<<q.front()<<endl;
     q.pop();
     cout<<q.front()<<endl;
     
    cout<<q.empty()<<endl; // False== 0 
}
int main()
{
    learnQueue();
}