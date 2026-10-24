#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b; cin >> a >> b;
    int ans1=floor(a*1.0/b);
    int ans2=ceil(a*1.0/b);
    int ans3=round(a*1.0/b);

    cout << "floor " << a << " / " << b << " = " << ans1 << endl;
    cout << "ceil " << a << " / " << b << " = " << ans2 << endl;
    cout << "round " << a << " / " << b << " = " << ans3 << endl;
    return 0;
}