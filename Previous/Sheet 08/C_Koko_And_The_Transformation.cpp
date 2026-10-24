/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-25 || 09:35:31
 * * * * File    : C_Koko_And_The_Transformation.cpp
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
    ll n,m; cin >> n >> m;
    vector<ll> a(n), b(m);

    ll sum_a=0, sum_b=0;
    for(ll i=0; i<n; i++){
        cin >> a[i];
        sum_a+=a[i];
    }
    for(ll i=0; i<m; i++){
        cin >> b[i];
        sum_b+=b[i];
    }
    if(sum_a==sum_b){
        cyes;
    }else cno;
}


int main()
{
    fast();
    int t=1;
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah
}