#include<bits/stdc++.h>
using namespace std;
int main(){
    int a; cin >> a;
    string s; cin >> s;

    int sum=0;
    for(char ch:s){
        sum+=ch-'0';
    }
    cout << sum << endl;

}