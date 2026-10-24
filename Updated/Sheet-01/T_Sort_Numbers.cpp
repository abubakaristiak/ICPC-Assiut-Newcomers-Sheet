#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c; cin >> a >> b >> c;
    vector<int> v={a,b,c};
    sort(v.begin(), v.end());
    for(int i=0; i<3; i++){
        cout << v[i] << endl;
    }
    cout << endl;
    cout << a << endl << b << endl << c << endl;
}