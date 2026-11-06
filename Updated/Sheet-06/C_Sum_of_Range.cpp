#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b; cin >> a >> b;
    if(a>b){
        swap(a,b);
    }
    long long int allSum=0, evenSum=0, oddSum=0;
    for(int i=a; i<=b; i++){
        allSum+=i;
        if(i%2==0){
            evenSum+=i;
        }else{
            oddSum+=i;
        }
    }
    cout << allSum << endl << evenSum << endl << oddSum << endl;
}