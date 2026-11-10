#include<bits/stdc++.h>
using namespace std;

long long sum(vector<int> v, int i, int n){
    if(i==n){
        return 0;
    }
    return v[i]+sum(v,i+1,n);
}
int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    cout << sum(v,0,n);
}