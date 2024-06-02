#include<bits/stdc++.h>
using namespace std;
void pattern1(int n)
{
for(int i=0;i<n;i++)
{
    for(int j=0;j<n-i;j++)
    {
        cout<<"*";
    }
    for(int j=0;j<2*i;j++)
    {
        cout<<" ";
    }
    for(int j=0;j<n-i;j++)
    {
        cout<<"*";
    }
    cout<<endl;

}

for(int i=n-1;i>=0;i--)
{
    for(int j=0;j<n-i;j++)
    {
        cout<<"*";
    }
    for(int j=0;j<2*i;j++)
    {
        cout<<" ";
    }
    for(int j=0;j<n-i;j++)
    {
        cout<<"*";
    }
    cout<<endl;

}
}

int main()
{

    int n;
    cin>>n;
    pattern1(n);
}


