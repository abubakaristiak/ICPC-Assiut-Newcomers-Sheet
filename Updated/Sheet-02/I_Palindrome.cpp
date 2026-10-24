#include<iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int temp=n, res=0;

    while(n!=0){
        int r=n%10;
        res=res*10+r;
        n/=10;
    }
    cout << res << endl;
    if(res==temp){
        cout << "YES" << endl;
    }else cout << "NO" << endl;
    return 0;
    
}