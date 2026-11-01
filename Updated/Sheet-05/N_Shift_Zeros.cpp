#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v(n), res;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        if(x!=0){
            res.push_back(x);
        }
    }
    for(int i=res.size()-1; i<n; i++){
        res.push_back(0);
    }

    for(int i=0; i<n; i++){
        cout << res[i] << " ";
    }


}