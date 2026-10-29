#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,cnt=0; cin >> n;
    int res=0,p=1;
    while(n!=0){
        int digit=n%2;
        if(digit==1){
            cnt++;
        }
        res+=digit*p;
        n/=2;
        p*=10;
    }
    // cout << res << endl << cnt << endl;
    int ans=0, power=1;
    for(int i=0; i<cnt; i++){
        ans+=power;
        power*=2;
    }
    cout << ans << endl;
    
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }

}