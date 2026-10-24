#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;

    long long int ar[51];
    ar[1]=0, ar[2]=1;

    for(long long int i=3; i<=n; i++){
        long long int fibo=ar[i-1]+ar[i-2];
        ar[i]=fibo;
    }
    cout << ar[n] << endl;

}