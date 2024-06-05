#include<bits/stdc++.h>
using namespace std;
void learnStack()
{
    stack<int>s;
    s.push(5);
    s.push(10);
    s.emplace(15);
    cout<<s.top()<<endl;
   s.pop();
   cout<<s.top()<<endl;
   cout<<s.size();
}
int main()
{
    learnStack();
}