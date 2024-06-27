/*Given a number N. Count the number of digits in N which evenly divide N.

Note :- Evenly divides means whether N is divisible by a digit i.e. leaves a remainder 0 when divided.*/

#include<bits/stdc++.h>
using namespace std;
int countDigit(int N)
{    int num=N;
    int count=0;
    while(N>0)
    {     
        
        int lastDigit;
        lastDigit=N%10;
    
        if(lastDigit!=0 && num%lastDigit==0){
        count++;
        }

        N=N/10;
    }
    cout<<count;
}
int main()
{
int n;
cin>>n;
countDigit(n);
}