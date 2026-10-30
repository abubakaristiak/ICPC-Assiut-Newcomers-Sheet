#include<bits/stdc++.h>
using namespace std;

long long int power(int n, int p){
    long long int res=1;
    for(int i=0; i<p; i++){
        res*=n;
    }   
    return res;
}
void solve(){
    int n,p; cin >> n >> p;
    long long int res=0;
    for(int i=2; i<=p; i+=2){
        res+=power(n,i);
    }
    cout << res << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    while(t--){
        solve();
    }

    
}