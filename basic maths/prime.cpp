#include<bits/stdc++.h>
using namespace std;
#define ll long long
void checkPrime(int n)
{
    int cnt=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cnt++;
             if(n/i!=i) cnt++;
        }
       
    }
    if (cnt==2)
    {
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"not Prime"<<endl;
    }

}
int main()
{
 int n;
 cin>>n;
 checkPrime(n);
}