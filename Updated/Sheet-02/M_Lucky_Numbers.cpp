#include<iostream>
using namespace std;

int isCheck(int n){
    int flag=1;
    while (n!=0)
    {
        int r=n%10;
        if(r!=4 && r!=7){
            flag=0;
            break;
        }
        n/=10;
    }
    return flag;
    
}
int main(){
    int n,m; cin >> n >> m; 
    int track=0;
    for(int i=n; i<=m; i++){
        if(isCheck(i)==1){
            cout << i << " ";
            track=1;
        }
    }
    if(track==0) cout << -1 << endl;
    
}