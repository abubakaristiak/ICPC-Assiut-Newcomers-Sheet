#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin >> n >> m;
    vector<int> v(m+1, 0);

    for(int i=0; i<n; i++){
        int x; cin >> x;
        v[x]++;
    }

    for(int i=1; i<=m; i++){
        cout << v[i] << endl;
    }   

}