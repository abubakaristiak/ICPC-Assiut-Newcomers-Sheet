/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-03-02 || 22:27:52
 * * * * File    : C_Wonderful_Number.cpp
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

bool isOdd(int n){
    return n%2==1;
}
bool isPalindrome(int n){
    string res="";
    while (n>0)
    {
        res+=(n%2)+'0';
        n/=2;
    }
    int l=0, r=res.size()-1;
    while(l<r){
        if(res[l]!=res[r]){
            return false;
        }
        l++;
        r--;
    }
    
}


void solve()
{
    int n; cin >> n;
    if(isOdd(n) && isPalindrome(n)){
        yes;
    }else no;
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