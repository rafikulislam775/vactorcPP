#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4};
    // only insert korte hole
    v.insert(v.begin()+2,100);//1st line teke spacipic point bole diye ki insert korte sassi ta dite hobe
    // vector<int>v2 = {100,20,30,40,50};
    // now whole vector k insert kore dekbo
    // v te insert korv and pointer bole dite 
    // hobe v.begin()+ koto number index teke , v2 koto tolo (first to last)
    // v.insert(v.begin()+2,v2.begin(),v2.end()-2);
    // v.insert(v.begin()+2,v2.begin(),v2.end());
    for(int x:v)
    // eta only value golo k print kora jai 
    // problem index pawa jave na only for whole print 
    {
        cout <<x<<" ";
    }
    return 0;
}