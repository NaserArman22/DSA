#include<bits/stdc++.h>
using namespace std;
void learnPriorityQueue()
{
    //also known as MAX heap
    priority_queue<int> pq;
    pq.push(5);
    pq.push(10);
    pq.emplace(7);
    cout<<pq.top()<<endl;
    pq.pop();
     cout<<pq.top()<<endl;
//mean heap
 priority_queue<int ,vector<int>,greater<int>> pq1;
  pq1.push(5);
    pq1.push(10);
    pq1.emplace(7);
    cout<<pq1.top()<<endl;
    pq1.pop();
     cout<<pq1.top()<<endl;

}
int main()
{
     learnPriorityQueue();
}