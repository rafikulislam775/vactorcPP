#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10,20,30,40,50};
    // eta moloto 30 jekhane pabe sekhane 100 diye replace kore nive
//    replace(v.begin(),v.end(),30,100);
// loop ta v.begin- v.end (start- end )porjonto loop saliye jekhanbe 30 pabe 
// sekhane 100 diye riplace kore dive
   replace(v.begin(),v.end(),30,100);

    for(int x:v){
        cout << x << " ";
    }
    return 0;
}