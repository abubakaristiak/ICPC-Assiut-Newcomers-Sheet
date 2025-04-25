/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : Abu Bakar Istiak
 * * * * Created : 2025-03-27 || 16:51:32
 * * * * File    : A_Palindromes_Replace.cpp
*/



#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;



string solve()
{
    string s; cin >> s;
    int n=s.size();
    int l=0, r=n-1;
    while (l<=r)
    {
        if(s[l]==s[r]){
            if(s[l]=='?'){
                s[l]=s[r]='a';
            }
        }else if(s[l]=='?'){
            s[l]=s[r];
        }else if(s[r]=='?'){
            s[r]=s[l];
        }else{
            return "-1";
        }
        l++, r--;
    }
    return s;
    

}


int main()
{
    fast();
    int t=1;
    while (t--) {
        cout << solve() << endl;
    }

    return 0;


// Alhamdulillah---(Ramadan Kareem)
}