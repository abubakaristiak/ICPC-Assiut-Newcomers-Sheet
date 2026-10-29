#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(long long int n){
    string s="";
    while(n!=0){
        s += char(n%2+'0');
        n/=2;
    }
    long long int i=0, j=s.length()-1;
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
void solve(){
    long long int n; cin >> n;
    if(n%2==0){
        cout << "NO" << endl;
        return;
    }
    if(isPalindrome(n)){
        cout << "YES" << endl;
    }else cout << "NO" << endl;
    
}
int main(){
    long long int t=1;
    while(t--){
        solve();
    }
}