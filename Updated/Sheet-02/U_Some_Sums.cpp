#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b; cin >> n >> a >> b;
    int res=0;
    for(int i=1; i<=n; i++){
        int x=i;
        int sum=0;

        while(x!=0){
            int digit=x%10;
            sum+=digit;
            x/=10;
        }
        if(sum>=a && sum<=b){
            res+=i;
        }
    }
    cout << res << endl;
    
}