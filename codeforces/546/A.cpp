#include <iostream>
using namespace std;
long long int total_cost(long long int k,long long int w){
    long long int cost;
    cost=(w)*(w+1)*k;
    return cost/2;
}
int main(){
    long long int cost,k=3,n=17,w=4,remaining_money=0;
    scanf("%lld %lld %lld",&k,&n,&w);
    cost=total_cost(k,w);
    if(cost>n){
        cout<<cost-n;
    }else{
        cout<<"0";
    }
}
