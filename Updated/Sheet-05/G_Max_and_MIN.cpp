#include<bits/stdc++.h>
using namespace std;

void is_find_max_min(vector<int> v){
    int mx=*max_element(v.begin(), v.end());
    int mn=*min_element(v.begin(), v.end());
    cout << mn << " " << mx << endl;
}
int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    is_find_max_min(v);
}