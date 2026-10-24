#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int mx=max_element(v.begin(), v.end())-v.begin();
    int mn=min_element(v.begin(), v.end())-v.begin();
    
    swap(v[mn],v[mx]);
    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }
    // cout << mx << " " << mn << endl;
} 