#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        int cnt=1, len=1;
        for(int i=1; i<n; i++){
            if(v[i]>=v[i-1]){
                len++;
            }else{
                len=1;
            }
            cnt+=len;
        }
        cout << cnt << endl;
    }
}