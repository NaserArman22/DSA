#include<bits/stdc++.h>
using namespace std;
void pattern1(int n)
{
for(int i=0;i<n;i++)
{      int k;
    for(int j=0;j<=i;j++)
    {
        k=j+1;
        cout<<k<<" ";
    }

    for(int j=0;j<2*n-(2*i+2);j++)
    {
        cout<<" ";
    }
    for(int j=0;j<=i;j++)
    {
       cout<<k<<" ";
        k--;
    }
        k=0;
        cout<<endl;
}
}

int main()
{

    int n;
    cin>>n;
    pattern1(n);
}

