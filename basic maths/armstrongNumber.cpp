#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool checkArmstrong(int x)
{
    int org=x;

    int sum=0;
    while(x>0)
    {
        int lastDigit=x%10;
        cout<<lastDigit<<endl;
        cout<<pow(lastDigit,3)<<endl;
       sum=sum+pow(lastDigit,3);
        cout<<sum<<endl;

        x=x/10;
    }
    cout<<sum;
    if(sum==org)
    {
        cout<<"true";
    }
    else{
        cout<<"false";

    }

}
int main()
{
 int n;
 cin>>n;
 checkArmstrong(n);


}
