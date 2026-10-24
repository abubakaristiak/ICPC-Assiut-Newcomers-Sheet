#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    string target="hello";

    int n=s.length(), j=0;
    for(int i=0; i<n; i++){
        if(s[i]==target[j]){
            j++;
        }
        if(j==5){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}