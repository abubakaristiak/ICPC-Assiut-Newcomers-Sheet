#include<bits/stdc++.h>
using namespace std; 
int main(){
    string s; cin >> s;
    string res=s;

    for(int i=1; i<s.size(); i++){
        string x=s.substr(0,i);
        string y=s.substr(i);
        
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        string t=x+y;

        if(t<res){
            res=t;
        }
    }
    cout << res << endl;
}