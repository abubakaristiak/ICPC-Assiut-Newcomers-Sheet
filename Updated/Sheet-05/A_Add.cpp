#include<bits/stdc++.h>
using namespace std;

int isAdd(int a, int b){
    return a+b;
}
int main(){
    int a,b; cin >> a >> b;
    int res = isAdd(a,b);
    cout << res << endl;
}