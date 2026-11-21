#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;

    int cnt[26]={0};
    char ch;
    for(int i=0; i<n; i++){
        scanf(" %c", &ch);
        cnt[ch-'a']++;
    }
    for(int i=0; i<26; i++){
        for(int j=0; j<cnt[i]; j++){
            cout << char('a'+i);
        }
    }

}