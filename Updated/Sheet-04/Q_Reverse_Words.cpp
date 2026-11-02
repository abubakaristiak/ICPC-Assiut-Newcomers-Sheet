#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, word;
    getline(cin,s);
    stringstream ss(s);
    bool flag=true;
    while(ss>>word){
        reverse(word.begin(), word.end());
        if(!flag){
            cout << " ";
        }
        cout << word;
        flag=false;
    }
    return 0;
}