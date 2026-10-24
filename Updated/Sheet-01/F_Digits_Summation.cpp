#include<iostream>
using namespace std;
int main(){
    long long num1, num2; cin >> num1 >> num2; 
    long long sum=(num1%10)+(num2%10);
    cout << sum << endl;
    return 0;
}