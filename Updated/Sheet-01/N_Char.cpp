#include<iostream>
#include<string>
using namespace std;
int main(){
    char ch; cin >> ch;
    if(ch>='A' && ch<='Z'){
        cout << char(ch+32) << endl;
    }else cout << char(ch-32) << endl;
     
}