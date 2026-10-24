#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int a; char ch; int b; cin >> a >> ch >> b;
    if(ch=='>'){
        if(a>b){
            cout << "Right" << endl;
        }else cout << "Wrong" <<endl;
    }else if(ch=='<'){
        if(a<b){
            cout << "Right" << endl;
        }else cout << "Wrong" << endl;
    }else if(ch=='='){
        if(a==b){
            cout << "Right" << endl;
        }else cout << "Wrong" << endl;
    }
}