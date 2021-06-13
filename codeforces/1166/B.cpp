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
 

void solve(ll t1,ll t2){
    ll n=min(t1,t2),m=max(t1,t2);
    string ans="";
    string t="aeiou";
    ll k=0;
    forn(i,n){
        ll x=k;
        forn(j,m){
            ans+=t[x];
            x++;
            if(x==5){
                x=0;
            }
        }
        ++k;
        if(k==5){
            k=0;
        }
    }    
    cout<<ans;
}
int main()
{
    fast_cin();
    ll t;
    cin>>t;
    ll k=pow(t,0.5);
    if(k<5 || t<5){
        cout<<-1;
        return 0;
    }
    ll n,m;
    if(k*k==t){
        n=k;
        m=k;
    }else{
        ll i=1,diff=10000;
        while(i<t){
            if(t%i==0 && abs(i-(t/i))<diff){
                diff=abs(i-(t/i));
                m=i;
                n=t/i;
            }
            i++;
        }
    }
    if(m<5 || n<5){
        cout<<-1;
        return 0;
    }
    solve(n,m);
    return 0;
}