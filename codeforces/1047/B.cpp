#include<iostream>
#include <bits/stdc++.h>

using namespace std;
using ll =long long int;
int main(){
    int n;
    cin>>n;
    ll arr[n][2];
    int i=0;
    ll x=0,y=0;
    for(i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1];
        if(arr[i][0]+arr[i][1]>x+y){
            x=arr[i][0];
            y=arr[i][1];
        }
    }
    ll a=x+y;
    cout<<a<<"\n";

}
