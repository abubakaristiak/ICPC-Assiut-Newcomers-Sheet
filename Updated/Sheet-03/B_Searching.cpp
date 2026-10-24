#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    int idx=-1;
    int target; cin >> target;
    for(int i=0; i<n; i++){
        if(ar[i]==target){
            idx=i;
            break;
        }
    }
    cout << idx << endl;

    
    
}