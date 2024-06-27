//https://leetcode.com/problems/palindrome-number/description/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
bool checkPalindorme(int x)
{
int org=x;
ll sum =0;
while(x>0)
{
    ll lastdigit=x%10;
    sum = sum*10 + lastdigit;
    x=x/10;
}
if(sum==org){
   return true;
}
else{
    return false;
}

}
int main()
{
 int n;
 cin>>n;
 checkPalindorme(n);
 if(true)
 {
    cout<<"true";
 }
 else{
    cout<<"false";
 }
}