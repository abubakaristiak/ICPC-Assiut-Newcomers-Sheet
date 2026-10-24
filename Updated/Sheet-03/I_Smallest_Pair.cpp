#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int ar[n];
        for(int i=1; i<=n; i++){
            cin >> ar[i];
        }
        int mn=INT_MAX;
        for(int i=1; i<=n; i++){
            for(int j=i+1; j<=n; j++){
                int val=(ar[i]+ar[j]+j-i);
                mn=min(mn, val);
            }
        }
        cout << mn << endl;
    }
    
}