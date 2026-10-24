#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s1,s2;
        cin >> s1 >> s2;

        string res="";
        int n=0, m=0;
        while(n<s1.length() || m<s2.length()){
            if(n<s1.length()){
                res.push_back(s1[n]);
                n++;
            }
            if(m<s2.length()){
                res.push_back(s2[m]);
                m++;
            }

        }
        cout << res << endl;
    }

}