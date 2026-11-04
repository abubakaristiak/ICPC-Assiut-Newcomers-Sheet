#include<bits/stdc++.h>
using namespace std;
void fact(int n){
    if(n==0){
        return;
    }
    cout << "I love Recursion" << endl;
    fact(n-1);
}
int main(){
    int n; cin >> n;
    fact(n);
}