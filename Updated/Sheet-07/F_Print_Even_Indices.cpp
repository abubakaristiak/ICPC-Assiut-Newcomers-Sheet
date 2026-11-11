#include<bits/stdc++.h>
using namespace std;

void printEven(vector<int> v, int i){
    if(i<0){
        return;
    }
    cout << v[i] << " ";
    printEven(v, i-2);
}
int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int l=(n-1);
    if(l%2!=0){
        l--;
    }
    printEven(v,l);
}