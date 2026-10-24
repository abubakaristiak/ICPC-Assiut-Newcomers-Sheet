#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        long long int sz=s.length();

        if(sz<=10){
            cout << s << endl;
        }else{
            cout << s[0] << sz-2 << s[sz-1] << endl;
        }
    }
        
} 