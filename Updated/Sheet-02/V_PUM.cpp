#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;

    int x=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=3; j++){
            cout << x << " ";
            x++;
        }
        x++;
        cout << "PUM" << endl;
    }
}