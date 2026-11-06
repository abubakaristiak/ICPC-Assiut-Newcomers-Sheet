#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b; cin >> a >> b;
    string s; cin >> s;

    bool flag=true;
    if(s[a]!='-'){
        flag=false;
    }

    for(int i=0; i<s.size(); i++){
        if(i!=a && !isdigit(s[i])){
            flag=false;
            break;
            
        }
    }
    if(flag){
        cout << "Yes" << endl;
    }else cout << "No" << endl;
}