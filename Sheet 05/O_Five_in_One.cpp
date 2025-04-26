/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-26 || 14:01:20
 * * * * File    : O_Five_in_One.cpp
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

void mnVal(vector<int> v){
    int mn=*min_element(v.begin(), v.end());
    cout << "The minimum number : "<< mn << endl;

}
void mxVal(vector<int> v){
    int mx=*max_element(v.begin(), v.end());
    cout << "The maximum number : "<< mx << endl;

}
bool isPrime(int num){
   if(num<=1) return false;
   for(int i=2; i*i<=num; i++){
    if(num%i==0){
        return false;
    }
   }
   return true;
}
bool isPalindrome(int num){
    int org=num, rev=0;
    while (num>0)
    {
        int digit=num%10;
        rev=rev*10+digit;
        num/=10;
    }
    return org==rev;
}

int isDivisor(vector<int> &v){
    int mxDivCnt=0, numMxDiv=0;
    for(int num:v){
        int divisorCnt=0;
        for(int i=1; i<=num; i++){
            if(num%i==0){
                divisorCnt++;
            }
        }
        if(divisorCnt>mxDivCnt){
            mxDivCnt=divisorCnt;
            numMxDiv=num;
        }else if(divisorCnt==mxDivCnt){
            numMxDiv=max(numMxDiv, num);
        }
    }
    return numMxDiv;
    
}


void solve()
{
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    //1
    mxVal(v);
    
    // 2
    mnVal(v);

    // 3
    int primeCnt=0;
    for(int i=0; i<n; i++){
        if(isPrime(v[i])){
            primeCnt++;
        }
    }
    cout << "The number of prime numbers : "<< primeCnt << endl;

    // 4
    int palindromeCnt=0;
    for(int i=0; i<n; i++){
        if(isPalindrome(v[i])){
            palindromeCnt++;
        }
    }
    cout << "The number of palindrome numbers : "<< palindromeCnt << endl;

    // 5;
    int mxdivisorNum=isDivisor(v);
    cout << "The number that has the maximum number of divisors : " << mxdivisorNum << endl;


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