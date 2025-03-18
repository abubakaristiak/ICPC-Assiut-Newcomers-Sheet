/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-03-18 || 23:18:39
 * * * * File    : T_URL.cpp
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
    string url; cin >> url;

    bool ok=false;
    for(int i=0; i<url.size(); i++){
        if((url[i]=='?' || url[i]=='&') && !ok){
            ok=true;
            continue;
        }
        if(ok){
            if(url[i]!= '=' && url[i]!='&'){
                cout << url[i];
            }else if(url[i]== '='){
                cout << ": ";
            }else if(url[i]=='&'){
                cout << endl;
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