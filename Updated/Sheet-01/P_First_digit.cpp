#include<iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int res=n/1000;
    if(res%2==0){
        cout << "EVEN" << endl;
    }else cout << "ODD" << endl;
}