#include<bits/stdc++.h>
using namespace std;
#define ll long long
int cnt=1;
void printWithoutLoop(int n)
{
    if(cnt==(n+1)) return;
    

    cout<<cnt<<endl;
      cnt++;
      printWithoutLoop(n);
} 
int main()
{
    int n;
    cin>>n;
    printWithoutLoop(n);
}