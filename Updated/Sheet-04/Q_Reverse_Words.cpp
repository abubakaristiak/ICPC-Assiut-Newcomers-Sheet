#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, word;
    getline(cin,s);
    stringstream ss(s);
    while(ss>>word){
        reverse(word.begin(), word.end());
        cout << word << " ";
    }
    return 0;
}