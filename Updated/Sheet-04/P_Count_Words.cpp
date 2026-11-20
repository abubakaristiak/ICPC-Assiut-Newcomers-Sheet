#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,word; 
    getline(cin, s);
    
    for(char &ch:s){
        if(!isalpha((unsigned char) ch)){
            ch=' ';
        }
    }
    stringstream ss(s);
    int cnt=0;
    while(ss>>word){
        cnt++;
    }
    cout << cnt << endl;
}