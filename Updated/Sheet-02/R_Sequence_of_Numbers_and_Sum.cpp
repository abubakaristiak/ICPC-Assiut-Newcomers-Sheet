#include<iostream>
using namespace std;
int main(){
    int n,m; 
    while(true){
        cin >> n >> m;
        
        if(n<=0 || m<=0){
            break;
        }

        int sum=0;
        int s=min(n,m);
        int e=max(n,m);
        for(int i=s; i<=e; i++){
            cout << i << " ";
            sum+=i;
        }
        cout << "sum =" << sum << endl;
    }
    return 0;
}