#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    int flag=0;
    int i=0, j=s.length()-1;
    while (i<j)
    {
        if(s[i]!=s[j]){
            flag=1;
            cout << "NO" << endl;
            break;
        }
        i++; j--;
    }
    if(flag==0){
        cout << "YES" << endl;
    }
    
} 