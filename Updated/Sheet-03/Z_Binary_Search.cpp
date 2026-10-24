#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q; cin >> n >> q;
    set<int> st;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        st.insert(x);
    }

    while(q--){
        int x; cin >> x;
        if(st.count(x)){
            cout << "found" << endl;
        }else cout << "not found" << endl;
    }
}