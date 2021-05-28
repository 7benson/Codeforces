#include <iostream>
#include <vector>
using namespace std;
using ll= long long int;
int main(){
    vector<ll> answers;
    ll t;
    cin>>t;
    for(int i=0;i<t;i++){
        ll n,k;
        cin>>n>>k;
        ll steps=0;
        while(n!=0){
            if(n%k==0){
                n=n/k;
                steps+=1;
            }else{
                ll r=n%k;
                steps+=r;
                n-=r;
            }
        }
        answers.push_back(steps);
    }
    for(int i=0;i<t;i++){
        cout<<answers[i]<<"\n";
    }

}
