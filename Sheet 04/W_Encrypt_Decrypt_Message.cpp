/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-03-15 || 23:42:07
 * * * * File    : W_Encrypt_Decrypt_Message.cpp
*/



#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
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
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
    int n; cin >> n;
    string s; cin >> s;

    string key="PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string original="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    if(n==1){
        for(int i=0; i<s.size(); i++){
            for(int j=0; j<original.size(); j++){
                if(s[i]==original[j]){
                    cout << key[j];
                    break;;
                }
            }
        }
    }else{
        for(int i=0; i<s.size(); i++){
            for(int j=0; j<key.size(); j++){
                if(s[i]==key[j]){
                    cout << original[j];
                    break;;
                }
            }
        }
    }
}


int main()
{
    fast();
    int t=1;
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah---(Ramadan Kareem)
}