#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N=1e6+10;

ll t,d;
ll primes[N],cnt;
bool st[N];

void get_primes(ll n){
    for(int i=2;i<=n;i++){
        if(!st[i]) primes[cnt++]=i;
        for(int j=0;primes[j]<=n/i;j++){
            st[primes[j]*i]= true;
            if(i%primes[j]==0) break;
        }
    }
}

int main(){
    get_primes(1e6);
    cin>>t;
    while (t--){
        cin>>d;
        vector<ll> v;
        ll index=1;
        for(int i=0;i<1e5;i++){
            if(primes[i]-index>=d){
                v.push_back(primes[i]);
                index=primes[i];
            }
            if(v.size()>=2) break;
        }
        ll res=1;
        for(auto x:v){

            res*=x;
        }
        cout<<res<<endl;
    }


    return 0;
}
