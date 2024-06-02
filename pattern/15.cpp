#include<bits/stdc++.h>
using namespace std;
void pattern1(int n)
{

    for(int i=n;i>0;i--)
    {

       for(char ch='A';ch<'A'+i;ch++){
        cout<<ch<<" ";
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




