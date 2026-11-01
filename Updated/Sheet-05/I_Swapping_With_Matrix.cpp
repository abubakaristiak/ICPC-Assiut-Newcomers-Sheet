#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y; cin >> n >> x >> y;
    int ar[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> ar[i][j];
        }
    }

    for(int j=0; j<n; j++){
        swap(ar[x-1][j],ar[y-1][j]);
    }
    for(int i=0; i<n; i++){
        swap(ar[i][x-1],ar[i][y-1]);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }


}