#include<iostream>
#include <vector>

using namespace std;
using ll=long long int;
int main(){
    int t,n,k,a;
    cin>>t;
    while(t--){
        vector<ll>v;
        cin>>n>>k;
        ll range = n*k,j = 0,div = 0,sum = 0;
        div = n/2;

        for(ll i=0; i<range; i++){
            cin>>a;
            v.push_back(a);
        }
        for(ll i=range-1-div; i>=0; i-=div+1){
            sum += v[i];
            j++;
            if(j == k)break;
        }
        cout<<sum<<endl;
    }
}
