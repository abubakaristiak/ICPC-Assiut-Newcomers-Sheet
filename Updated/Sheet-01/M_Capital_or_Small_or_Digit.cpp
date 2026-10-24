#include<iostream>
#include<string>
using namespace std;
int main(){
    char ch; cin >> ch;
    if(ch>='A' && ch<='Z'){
        cout << "ALPHA" << endl << "IS CAPITAL" << endl;
    }else if(ch>='a' && ch<='z'){
        cout << "ALPHA" << endl << "IS SMALL" << endl;
    }else cout << "IS DIGIT" << endl;
    
       
}