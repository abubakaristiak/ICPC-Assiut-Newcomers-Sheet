#include<bits/stdc++.h>
using namespace std;

int maxi(vector<int> v){
    return *max_element(v.begin(), v.end());
}
int mini(vector<int> v){
    return *mini_element(v.begin(), v.end());
}
int isPrime(vector<int> v){
    int cnt=0;
    for(int i=2; i<n; i++){
        if(v[i]%i!=0){
            cnt++;
        }
    }
    return cnt;
}
int palindrome()


int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    cout << "The maximum number : " << maxi(v) << endl;
    cout << "The minimum number : " << mini(v) << endl;
    cout << "The number of prime numbers : " << isPrime(v) << endl;
    cout << "The number of palindrome numbers : " << isPrime(v) << endl;
}