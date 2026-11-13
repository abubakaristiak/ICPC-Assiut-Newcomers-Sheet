#include<bits/stdc++.h>
using namespace std;

int findMax(vector<int> v, int n){
    if(n==1){
        return v[0];
    }
    return max(v[n-1], findMax(v, n-1));
}
int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    cout << findMax(v,n) << endl;
}