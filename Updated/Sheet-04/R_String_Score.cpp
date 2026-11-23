#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    string s; cin >> s;

    int score=0, i=0;
    while(i<s.size()){
        if(s[i]=='V'){
            score+=5;
        }
        else if(s[i]=='W'){
            score+=2;
        }
        else if(s[i]=='X'){
            if(i+1<s.size()){
                s.erase(i+1,1);
            }
        }
        else if(s[i]=='Y'){
            if(i+1<s.size()){
                char ch=s[i+1];
                s.erase(i+1,1);
                s.push_back(ch);
            }
        }
        else if(s[i]=='Z'){
            if(i+1<s.size()){
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