#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    string last_str1=str1.substr(str1.find_last_of(' ')+1);
    string last_str2=str2.substr(str2.find_last_of(' ')+1);
    if(last_str1==last_str2){
        cout << "ARE Brothers" << endl;
    }else cout << "NOT" << endl;
    
       
}