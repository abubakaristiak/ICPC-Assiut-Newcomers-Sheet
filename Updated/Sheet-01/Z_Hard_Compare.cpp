#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll a,b,c,d; cin >> a >> b >> c >> d;

    double p1=b*log(a);
    double p2=d*log(c);
    if(p1>p2){
        cout << "YES" << endl;
    }else cout << "NO" << endl;
}
