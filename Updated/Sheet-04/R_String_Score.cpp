#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n; cin >> n;
    string s; cin >> s;

    long long int score=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='V'){
            score+=5;
        }
        else if(s[i]=='W'){
            score+=2;
        }
        else if(s[i]=='X'){
            if(i!=s.size()-1){
                i++;
            }
        }
        else if(s[i]=='Y'){
            if(i!=s.size()-1){
                i++;
                char ch=s[i];
                s.push_back(ch);
            }
        }
        else{
            if(i!=s.size()-1){
                if(s[i+1]=='V'){
                    score/=5;
                    i++;
                }
                else if(s[i+1]=='W'){
                    score/=2;
                    i++;
                }
            }
        }
    }
    cout << score << endl;
    
}