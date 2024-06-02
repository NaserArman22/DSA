#include<bits/stdc++.h>
using namespace std;
void pairSolve()
{
    //pair is for storing couple of elements.Two value maybe in different data type.
    pair<int,int>p={1,3};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,char>c={2,'c'};
    cout<<c.first<<" "<<c.second<<endl;
    //nested pair
    pair<int, pair<int,int>>p1={10,{20,30}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<" "<<p1.second.first<<endl;

    //pair in array
    pair<int,int>arr[]={{1,2},{2,20},{4,6},{6,8}};
    cout<<arr[3].first<<" "<<arr[1].second;
}
int main()
{
    pairSolve();
}
