#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10,20,30,40,50};
    // v.erase(v.begin()+3);// single value delete kora
    v.erase(v.begin()+1,v.end()-1);//koto teke koto porjonto delete korte hobe 
    // cout << v.back() << " ";//get last value
    for(int x:v){
        cout << x << " ";
    }
    return 0;
}