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
 

void solve(){
}
int main()
{
    fast_cin();
    ll n;
    cin>>n;
    string inp;
    cin>>inp;
    string t1=inp.substr(0,n),t2=inp.substr(n,n);
    sort(t1.begin(),t1.end());
    sort(t2.begin(),t2.end());
    ll les=0,grt=0;
    forn(i,n){
        ll a=t1[i]-'0',b=t2[i]-'0';
        if(a>b){
            grt++;
        }else if(a<b){
            les++;
        }else{
            cout<<"NO";
            return 0;
        }
    }
    if((grt!=0 && les!=0) || (grt==0 && les==0)){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
    //
    return 0;
}