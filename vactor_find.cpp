#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10,20,30,40,30,50};
    // vector<int>::iterator it;
    auto it =find(v.begin(),v.end(),30);
    // cout<<*it;

    if(it==v.end()){
        cout<<" not  found"<<endl;
    }else{
        cout<<"found"<<endl;
    }
    return 0;
}