#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    sort(s.begin(), s.end());

    map<char, int> mp;
    int n=s.length();
    for(int i=0; i<n; i++){
        mp[s[i]]++;
    }
    for(auto it:mp){
        cout << it.first << " : " << it.second << endl;
    }
    return 0;

}