#include<iostream>
using namespace std;
int main(){
    char ch; cin >> ch;
    int test; cin >> test;
    while (test--)
    {
        int n; cin >> n;
        for(int i=0; i<n; i++){
            cout << ch;
        }
        cout << endl;
    }
    
}