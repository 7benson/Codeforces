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
 

void solve(){
}
int main()
{
    ll n,i,j,noise=0;
    cin>>n;
    set<char> present;
    vector<char> c1,c2;
    forn(i,n){
        string temp;
        cin>>temp;
        if(present.count(temp[0])==0){
            present.insert(temp[0]);
            c1.push_back(temp[0]);
        }else{
            ll c1_cnt=0,c2_cnt=0;
            forn(i,c1.size()){
                if(c1[i]==temp[0]){
                    c1_cnt++;
                }
            }
            forn(i,c2.size()){
                if(c2[i]==temp[0]){
                    c2_cnt++;
                }
            }
            if(c1_cnt>c2_cnt){
                c2.push_back(temp[0]);
                noise+=c2_cnt;
            }else{
                c1.push_back(temp[0]);
                noise+=c1_cnt;
            }
        }

    }
    cout<<noise;
    return 0;
}