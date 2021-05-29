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
    ll n,m,i,j,k;
    cin>>n>>m;
    string options[n];
    forn(i,n){
        cin>>options[i];
    }
    ll marks[m];
    forn(i,m){
        cin>>marks[i];
    }
    ll total_marks=0;
    char possible_ans[]={'A','B','C','D','E'};

    forn(j,m){
        char freq_option;
        ll freq=-1000;
        vector<char> ques;
        forn(i,n){
            ques.push_back(options[i][j]);
        }
        forn(k,5){
            ll temp=count(ques.begin(), ques.end(), possible_ans[k]);
            if(temp>freq){
                freq=temp;
                freq_option=possible_ans[k];
            }
        }
        total_marks+=marks[j]*freq;
        ques.clear();
    }
    cout<<total_marks;
    return 0;
}