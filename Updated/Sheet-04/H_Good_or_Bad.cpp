#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t; 
    while(t--){
        string s; cin >> s;
        int sz=s.length();
        bool flag=false;
        
        for(int i=0; i+2<sz; i++){
            string sb=s.substr(i,3);
            if(sb=="010" || sb=="101"){
                flag=true;
            }
        }
        if(flag==true){
            cout << "Good" << endl;
        }else cout << "Bad" << endl;
    }
        
} 