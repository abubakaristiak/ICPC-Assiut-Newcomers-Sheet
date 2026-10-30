#include<bits/stdc++.h>
using namespace std;

void solve(){
    double n; cin >> n;

    double sum=0.0;
    vector<double> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
        sum+=v[i];
    }
    double res=sum/n;
    cout << fixed << setprecision(7) << res << endl;
}

int main(){
    int t=1;
    while(t--){
        solve();
    }
}