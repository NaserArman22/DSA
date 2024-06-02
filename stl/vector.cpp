#include<bits/stdc++.h>
using namespace std;
void learnVector()
{
    vector<int> v;//declaring vector
    v.push_back(1);//insert element in vector
    v.push_back(2);
    v.emplace_back(20);//insert element in vector in faster way

    cout<<v[2]<<endl;//accesing second element of vector

    //pair vector
    vector<pair<int,string>>v1;
    v1.push_back({3,"learn"});
    v1.emplace_back(5,"Practice");
    //accesing pair in vector
    cout<<v1[1].second<<endl;

    //insert also can be done with Loop
    //insert at begining
    cout << "Inserting 5 at the beginning:" << endl;
    v.insert(v.begin(),5);
    //inserting in any position
    v.insert(v.begin()+2,3,50);
   cout << "The first element is: " << v[0] << endl;
    cout << "Erasing the second element" << endl;
    v.erase(v.begin()+1);//Erase
     cout << "Now the second element is: " << v[1] << endl;

    //accesing vector
    vector<int> ::iterator i=v.begin();
    cout<<*(i)<<" ";//1st elemnt
    i++;
    cout<<*(i)<<" "<<endl;;//second element
    vector<int> ::iterator i1=v.end();//this is not starting at last element.
    i1--;//Now starting at last element
    cout<<*(i1)<<endl;//last element
    //access with loop
    cout<<"Vector elements are:"<<endl;
    for(vector<int> ::iterator it=v.begin(); it<v.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    //access with loop in shortcut 1
     cout<<"Vector elements are:"<<endl;
     for(auto it=v.begin();it<v.end();it++)
     {
        cout<<*(it)<<" ";
     }
     cout<<endl;
    //access with loop in shortcut 2
     cout<<"Vector elements are:"<<endl;
     for(auto it :v)
     {
        cout<<it<<" ";
     }
     cout<<endl;
     cout<<v.size()<<endl;
     v.pop_back();
     //is  empty
    cout<< v.empty()<<endl;
    //clear
    v.clear();
    cout<< v.empty()<<endl;

     
}
int main()
{
    learnVector();
}