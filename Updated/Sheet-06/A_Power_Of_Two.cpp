#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n; cin >> n;

    if(n<=0){
        cout << "NO" << endl;
        return 0;
    }
    
    while(n%2==0){
        n/=2;
    }
    if(n==1){
        cout << "YES" << endl;
    }else cout << "NO" << endl;
}