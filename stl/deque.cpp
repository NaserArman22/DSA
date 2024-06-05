#include<bits/stdc++.h>
using namespace std;
void learnDq()
{
 deque<int>d;
 d.push_back(10);
 d.emplace_back(20);
 d.push_front(30);
 d.emplace_front(40);
 for(auto it:d)
 {
    cout<<it<< " ";
 }
 d.pop_back();
 d.pop_front();
 cout<<endl;
 for(auto it:d)
 {
    cout<<it<< " ";
 }
 dq.back();
 dq.front();
}
int main()
{
    learnDq();
}