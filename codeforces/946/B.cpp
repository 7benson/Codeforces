#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define arr_scan(inp,n) ll inp[n];  forn(i,n){  cin>>inp[i]; }

 
ll solve(ll n)
{
    ll p = 1;
    if (n && !(n & (n - 1)))
        return n;
 
    while (p < n)
        p <<= 1;
     
    return p>>=1;
}


int main()
{
    fast_cin();
    ll a,b;
    cin>>a>>b;
    // while(a!=0 && b!=0){
    //     if(a>=2*b){
    //         ll t=solve(2*b);
    //         // cout<<"a "<<t<<" ";
    //         a=a-t;
    //         continue;
    //     }
    //     if(b>=2*a){
    //         ll t=solve(2*a);
    //         // cout<<"b "<<t<<" ";
    //         b=b-2*t;
    //         continue;
    //     }
    //     break;
    // }

    while(a != 0 && b != 0 && (a >= 2*b || b >= 2*a))
    {
        if(a >= 2*b)
        {
            a %= (2*b);
        }
        else if(b >= 2*a)
        {
            b %= (2*a);
        }
    }


    cout<<a<<" "<<b;
    return 0;
}