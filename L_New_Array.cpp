#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
    cin>>n;
    vector <int> v1(n);
    vector <int> v2(n);
    for(int i=0; i<n; i++){
       
        cin>>v1[i];
    }
    for(int i=0; i<n; i++){
       
        cin>>v2[i];
    }
    //v3 te v2 k whole copy kora holo
    vector<int> v3(v2);

    // for(int val:v2){
    //     cout<<val <<" ";
    // }
    // for(int val:v1){
    //     cout<<val <<" ";
    // }
    // v3 te insert korsi: v3 er 1st  +zoto size asee  teke end (point bole deya)
    v3.insert(v3.begin()+n,v1.begin(),v1.end());
    for(int val:v3){
        cout<<val <<" ";
    }
   
    return 0;
}