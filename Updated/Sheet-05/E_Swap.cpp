#include<bits/stdc++.h>
using namespace std;

void isSwap(int &a, int &b){
    swap(a,b);
}
int main(){
    int a,b; cin >> a >> b;
    isSwap(a,b);
    cout << a << " " << b << endl;
}