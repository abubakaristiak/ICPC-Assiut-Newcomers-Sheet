#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int flag=0;

    if(n<2){
        flag=1;
    }
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout << "YES" << endl;
    }else cout << "NO" << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}