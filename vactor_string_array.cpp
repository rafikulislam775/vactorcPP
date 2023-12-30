#include<bits/stdc++.h>
using namespace std;
int main()
{// that is normal dtring but no inter  only one line
    // int n;
    // cin >> n; 
    // vector<string> v;
    // for(int i=0; i<n; i++)
    // {
    //     string s;
    //     cin >> s;
    //     v.push_back(s);
    // };
    // for(int i=0; i<n; i++)
    // {
    //     cout << v[i] << " ";
    // }
    // int n;
    // cin >> n; 
    // vector<string> v(n);
    // for(int i=0; i<n; i++)
    // {
       
    //     cin >> v[i];
      
    // };
    // for(string s:v)
    // {
    //     cout << s << " ";
    // }

    // that is inter wiht spce;
    int n;
    cin >> n;
    // ignor na dile 1st line k nine nive tai 
    cin.ignore();
    vector<string> v(n);
    for(int i = 0; i < n; i++){
        getline(cin, v[i]);
    }
    for(string s:v){
        cout << s << "\n";
    }

    return 0;
}