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
 

ll c(ll i,ll j,ll n,ll m){
    if(i<n && i>=0 && j>=0 && j<m)  return 1;
    else    return 0;
}
int main()
{
    fast_cin();
    ll n,m;
    cin>>n>>m;
    ll a[n][m],b[n][m];
    forn(i,n){
        forn(j,m){
            cin>>a[i][j];
            b[i][j]=0;
        }
    }
    vector<pair<ll,ll>> v;
    
    ll dx[]={0,0,1,1};
    ll dy[]={0,1,0,1};

    for(ll i=0;i+1<n;i++){
        for(ll j=0;j+1<m;j++){
            if(a[i][j]==1 && a[i+1][j]==1 && a[i+1][j+1]==1 && a[i][j+1]==1){
                v.pb(make_pair(i,j));
                forn(k,4){
                    ll idx=i+dx[k];
                    ll idy=j+dy[k];
                    if(c(idx,idy,n,m)){
                         b[idx][idy]=1;
                    }
                }
            }
        }
    }
    forn(i,n){
        forn(j,m){
            
            if(a[i][j]!=b[i][j]){
                cout<<-1<<ln;
                return 0;
            }
            // cout<<b[i][j]<<" ";
        }
        // cout<<ln;
    }
    if(v.size()){
        cout<<v.size()<<ln;
        forn(i,v.size())    cout<<v[i].first+1<<" "<<v[i].second+1<<ln;
    }
    else
        cout<<0;
    return 0;
}