#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,4,6};
    // cout << v.size() << endl;
    // eta  dye last index er value pawa jai
    // cout<<v[v.size()-1] << endl;
    // cout<<v.back() << endl;
    // first index er vlaue ber kora ja
    // cout<<v[0] << endl;
    // cout<<v.front() << endl;
    // vector <int>::iterator it;
    // for(auto it = v.begin(); it != v.end();it++){
    for(auto it = v.begin(); it < v.end();it++){
        // cout<<it[0] << endl;
        cout<<*it << endl;
    }
    return 0;
}