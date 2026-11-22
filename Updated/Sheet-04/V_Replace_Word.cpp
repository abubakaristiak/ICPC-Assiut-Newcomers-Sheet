#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    int n=s.size();

    string ans;
    for(int i=0; i<n; i++){
        if(s.substr(i,5)=="EGYPT"){
            ans+=' ';
            i+=4;
        }else{
            ans+=s[i];
        }
    }
    cout << ans << endl;
}