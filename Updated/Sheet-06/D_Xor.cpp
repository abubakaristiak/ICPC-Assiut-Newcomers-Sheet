#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,q; cin >> a >> b >> q;

    if(q%3==1){
        cout << a;
    }else if(q%3==2){
        cout << b;
    }else{
        cout << (a^b);
    }
    return 0;
}