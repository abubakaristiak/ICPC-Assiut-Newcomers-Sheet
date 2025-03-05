/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-03-05 || 20:04:23
 * * * * File    : C_Sum_of_Range.cpp
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

ll sum_all(ll n){
    return(n*(n+1))/2;
}
ll sum_even(ll n){
    ll evenCnt=n/2;
    return evenCnt*(evenCnt+1);
}
ll sum_odd(ll n){
    return sum_all(n)-sum_even(n);
}


void solve()
{
    ll a,b; cin >> a >> b;
    if(a>b){
        swap(a,b);
    }
    ll totalSum = sum_all(b)-sum_all(a-1);
    ll evenSum = sum_even(b)-sum_even(a-1);
    ll oddSum = sum_odd(b)-sum_odd(a-1);
    cout << totalSum << endl << evenSum << endl << oddSum << endl;

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