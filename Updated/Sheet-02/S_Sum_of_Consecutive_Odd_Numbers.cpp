#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int a,b; cin >> a >> b;
        int mn=min(a,b);
        int mx=max(a,b);
        int sum=0;

        for(int i=mn+1; i<mx; i++){
            if(i%2!=0){
                sum+=i;
            }
        }
        cout << sum << endl;
    }
}