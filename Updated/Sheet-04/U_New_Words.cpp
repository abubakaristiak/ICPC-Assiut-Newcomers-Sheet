#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    // cout << s << endl;

    int ar[26]={0};
    for(int i=0; i<s.size(); i++){
        ar[s[i]-'a']++;
    }
    // for(int i=0; i<26; i++){
    //     cout << i << " " <<char('a'+i) << ' ' << ar[i] << endl;
    // }

    int e=ar[4], g=ar[6], y=ar[24], p=ar[15], t=ar[19];
    vector<int>v={e,g,y,p,t};
    int res=*min_element(v.begin(), v.end());
    cout << res << endl;
    
}