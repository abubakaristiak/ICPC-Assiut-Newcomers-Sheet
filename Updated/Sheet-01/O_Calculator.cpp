#include<iostream>
using namespace std;
int main(){
    int a; char ch; int b;
    cin >> a >> ch >> b;
    if(ch=='+'){
        cout << a+b << endl;
    }else if(ch=='-'){
        cout << a-b << endl;
    }else if(ch=='*'){
        cout << a*b << endl;
    }else cout << a/b << endl;
}