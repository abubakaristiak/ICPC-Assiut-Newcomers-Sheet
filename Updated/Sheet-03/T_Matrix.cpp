#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n; cin >> n;
    long long int ar[n][n];

    long long int sum1=0, sum2=0;
    for(long long int i=0; i<n; i++){
        for(long long int j=0; j<n; j++){
            cin >> ar[i][j];
            if(i==j){
                sum1+=ar[i][j];
            }if(i+j==n-1){
                sum2+=ar[i][j];
            }
        }
    }
    cout << abs(sum1-sum2) << endl;
}