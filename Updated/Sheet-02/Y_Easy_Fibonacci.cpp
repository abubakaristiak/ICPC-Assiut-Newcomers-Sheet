#include<iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int f0=0, f1=1;
    for(int i=1; i<=n; i++){
        cout << f0 << " ";
        int fibo=f0+f1;
        f0=f1;
        f1=fibo;
    }
}