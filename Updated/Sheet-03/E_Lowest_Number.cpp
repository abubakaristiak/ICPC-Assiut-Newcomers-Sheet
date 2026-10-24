#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int ar[n], mn=ar[1], idx=1;
    for(int i=1; i<=n; i++){
        cin >> ar[i];
        if(ar[i]<mn){
            mn=ar[i];
            idx=i;
        }
    }
    cout << mn << " " << idx << endl;
    
}