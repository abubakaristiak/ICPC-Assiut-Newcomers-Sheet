#include<bits/stdc++.h>
using namespace std;

int maxi(vector<int> v){
    return *max_element(v.begin(), v.end());
}
int mini(vector<int> v){
    return *min_element(v.begin(), v.end());
}
int isPrime(vector<int> v){
    int cnt=0;
    for(int i=0; i<v.size(); i++){
        int flag=1;
        for(int j=2; j<v[i]; j++){
        if(v[i]%j!=0){
            flag=0;
            break;
        }
    }
    if(flag==1){
        cnt++;
    }
    }
    return cnt;
}
int palindrome(){

}


int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    cout << "The maximum number : " << maxi(v) << endl;
    cout << "The minimum number : " << mini(v) << endl;
    cout << "The number of prime numbers : " << isPrime(v) << endl;
    cout << "The number of palindrome numbers : " << palindrome(v) << endl;
}