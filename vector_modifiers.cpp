#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> x = {10,20,30};
    vector<int> v = {1,2,3};
    v=x;// x er value v e copy hoye gelo
    v.pop_back();// dan paser ekta delete kore dive
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}