#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    float val; cin >> val;
    int x=val;
    if(x==val){
        cout << "int " << x << endl;
    }else{
        cout << "float " << x << " " << fixed << setprecision(3) << val-x << endl;
    }
} 