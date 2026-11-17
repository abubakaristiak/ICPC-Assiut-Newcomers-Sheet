#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int flag=0;
    for(int i=1; i<=n; i++){
        int x=i;
        int l=1;
        while(x>0){
            int d=x%10;
            if(d!=4 && d!=7){
                l=0;
                break;
            }
            x/=10;
        }
        if(l && n%i==0){
            flag=1;
            break;
        }
    }
    if(flag){
        cout << "YES" << endl;
    }else cout << "NO" << endl;
    
}