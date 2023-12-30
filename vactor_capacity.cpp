#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    // cout<<v.max_size()<<endl;
    // v={10};
    // cout<<v.size();
    // cout<<v.capacity()<<endl;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40); 
    v.push_back(50);// dane new values add kora
    // cout<<v.capacity()<<endl;
    // clear kore just clear hoy but delete hoy na
    // v.clear();
    v.resize(3);// eta size 3 tar por egnor korbe
    v.resize(5,10);//eta size 5 ta kore dive baki golo k 10 baniye dive
    cout<<v.size()<<endl;
    for(int i =0; i < v.size(); i++){
        cout<<v[i]<<" ";
    };
    return 0;
}