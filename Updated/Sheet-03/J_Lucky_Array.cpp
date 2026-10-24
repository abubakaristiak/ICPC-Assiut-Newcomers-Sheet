#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    
    int mn=ar[0];
    for(int i=1; i<n; i++){
        mn=min(mn, ar[i]);
    }

    int cnt=0;
    for(int i=0; i<n; i++){
        if(ar[i]==mn){
            cnt++;
        }
    }

    if(cnt%2!=0){
        cout << "Lucky" << endl;
    }else cout << "Unlucky" << endl;

}