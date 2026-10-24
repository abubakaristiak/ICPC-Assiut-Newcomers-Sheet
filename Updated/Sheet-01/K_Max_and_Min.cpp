#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c; cin >> a >> b >> c;
    vector<int> vcc={a,b,c};
    cout << *min_element(vcc.begin(), vcc.end()) <<" " << *max_element(vcc.begin(), vcc.end()) << endl;
    
}