#include<iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        long long int n; cin >> n;

        if(n==0){
            cout << 0;
        }else{
            while(n!=0){
            long long int r=n%10;
            cout << r << " ";

            n/=10;
            }
        }
        cout << endl;

    }
    return 0;
    
}