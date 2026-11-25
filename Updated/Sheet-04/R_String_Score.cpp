#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    string s; cin >> s;

    int score=0;
    string t="";
    for(int i=0; i<n; i++){
        if(s[i]=='V'){
            score+=5;
        }
        else if(s[i]=='W'){
            score+=2;
        }
        else if(s[i]=='X'){
            i++;
        }
        else if(s[i]=='Y'){
            if(i+1<n){
                t+=s[i+1];
                i++;
            }
        }
        else if(s[i]=='Z'){
            if(i+1<){
                if(s[i+1]=='V'){
                score/=5;
                s.erase(i+1,1);
            }
            else if(s[i+1]=='W'){
                score/=2;
                s.erase(i+1,1);
            }
            }
        }
        i++;
    }
    cout << score << endl;
    
}