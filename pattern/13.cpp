#include<bits/stdc++.h>
using namespace std;
void pattern1(int n)
{
    int k=1;
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<=i;j++)
        {
            cout<<k++<<" ";
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


