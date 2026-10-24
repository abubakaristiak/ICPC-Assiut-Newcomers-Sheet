#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q; cin >> n >> q;
    string s; cin >> s;
    while(q--){
        string sq; cin >> sq;
        if(sq=="substr"){
            int a,b; cin >> a >> b;
            if(a>b){
                swap(a,b);
            }
            for(int i=a-1; i<b; i++){
                cout << s[i];
            }
            cout << endl;
        }else if(sq=="sort"){
            int a,b; cin >> a >> b;
            if(a>b){
                swap(a,b);
            }
            sort(s.begin()+(a-1), s.begin()+b);
        }else if(sq=="pop_back"){
            s.pop_back();
        }else if(sq=="back"){
            cout << s.back() << endl;
        }else if(sq=="reverse"){
            int a,b; cin >> a >> b;
            if(a>b){
                swap(a,b);
            }
            reverse(s.begin()+(a-1), s.begin()+b);
        }else if(sq=="front"){
            cout << s.front() << endl;
        }else if(sq=="push_back"){
            char ch; cin >> ch;
            s.push_back(ch);
        }else if(sq=="print"){
            int x; cin >> x;
            cout << s[x-1] << endl;
        }
    }
}