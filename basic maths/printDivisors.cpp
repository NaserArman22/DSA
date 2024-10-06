#include<bits/stdc++.h>
using namespace std;
void printDivisor(int n){
     vector<int> v;
 for (int i=1;i<=sqrt(n);i++)
 {
   
    if (n%i==0)
    {
        v.push_back(i);
        if(n/i!=i)
        {
            //cout<<n/i<<endl;
            v.push_back(n/i);
        }
    }
 }
 sort(v.begin(),v.end());
 for(auto it:v)
 {
    cout<<it<<" ";
 }


}
int main()
{
int n;
cin>>n;
printDivisor(n);
}