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

ll dx[]={1,0,-1,0};
ll dy[]={0,1,0,-1};

ll n,m;

ll val(ll x,ll y,ll *visited){
    if( x>=0 && x<n && y>=0 && y<m && *(visited+n*x+y)!=1)    return 1;
    else return 0;
}

void solve(char *inp){

    queue<pair<ll,ll>> q;
    ll visited[n][m]={0};
    q.push({0,0});
    visited[0][0]=1;

    ll cnt=1;

    if(*(inp+n*0+0)!='-'){
        *(inp+n*0+0)='B';
    }

    while(!q.empty()){
        ll x = q.back().first;
        ll y = q.back().second;
        q.pop();
        
        forn(i,4){
            ll tx=x+dx[i];
            ll ty=y+dy[i];
            if(val(tx,ty,*visited)){
                q.push({tx,ty});
                visited[tx][ty]=1;
                if(*(inp+n*tx+ty)!='-'){
                    if(cnt%2==0){
                        *(inp+n*tx+ty)='B';
                    }else{
                        *(inp+n*tx+ty)='W';
                    }
                }
            }
        }
        cnt++;
    }
    forn(i,n){
        forn(j,m){
            cout<<*(inp+n*i+j);
        }
        cout<<ln;
    }
    
}
int main()
{
    fast_cin();
    cin>>n>>m;
    string inp;
    forn(i,n){
        cin>>inp;
        forn(j,m){
            if(inp[j]=='.'){
                if((i+j)&1)     inp[j]='W';
                else    inp[j]='B';
            }
        }
        cout<<inp<<ln;
    }
    return 0;
}