#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string inp="maTRIx";
    cin>>inp;
    int i,lower=0,upper=0;
    for(i=0;i<inp.length();i++){
        if(islower(inp[i])){
            lower+=1;
        }else{
            upper+=1;
        }
    }
    if(upper>lower){
        transform(inp.begin(),inp.end(),inp.begin(),::toupper);
    }else{
        transform(inp.begin(),inp.end(),inp.begin(),::tolower);
    }
    cout<<inp;
}
