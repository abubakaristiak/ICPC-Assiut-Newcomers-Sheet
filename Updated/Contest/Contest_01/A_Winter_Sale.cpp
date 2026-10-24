#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,p; cin >> x >> p;

    double res=(p*100.0)/(100.0-x);
    cout << fixed << setprecision(2) << res << endl;
    
}