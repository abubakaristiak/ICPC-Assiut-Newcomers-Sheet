#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
        if(ar[i]<0){
            ar[i]=2;
        }else if(ar[i]>0){
            ar[i]=1;
        }
    }
    for(int i=0; i<n; i++){
        cout << ar[i] << " ";
    }
    
    
}