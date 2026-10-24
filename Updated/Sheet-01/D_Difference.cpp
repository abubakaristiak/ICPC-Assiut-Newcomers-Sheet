#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    long long a,b,c,d; cin >> a >> b >> c >> d;
    long long res=(a*b)-(c*d);
    cout << "Difference = " << res << endl;
    return 0; 
}