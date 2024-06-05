#include<bits/stdc++.h>
using namespace std;
void learnList()
{
    list<int> l;
    l.push_back(1);
    l.emplace_back(2);
    //Insert.Inserting is will take less time than vector.
   
    l.push_front(10);

    l.emplace_front(50);
   
    for(auto it:l)
    {
        cout<<it<<" ";
    }


      // other functions are same as vector   
}
int main() {
    learnList();
}
