#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n; cin >> n;
    int ecnt=0, ocnt=0, pcnt=0, ncnt=0;
    vector<int> v(n+1);
    for(int i=1; i<=n; i++){
        cin >> v[i];
        if(v[i]%2==0){
            ecnt++;
        }else ocnt++;
    }
    for(int i=1; i<=n; i++){
        if(v[i]<0) ncnt++;
        else if(v[i]!=0) pcnt++;
    }

    cout << "Even: " << ecnt << endl << "Odd: " << ocnt << endl 
    << "Positive: " << pcnt << endl << "Negative: " << ncnt << endl;

}