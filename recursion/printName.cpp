//https://www.geeksforgeeks.org/problems/print-gfg-n-times/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=print-gfg-n-times
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void printName(int i ,int n)
{
    if(i>n) return;
    

    cout<<"GFG "<<endl;
      i++;
      printName(i,n);
} 
int main()
{
    int n;
    cin>>n;
    printName(1,n);
}