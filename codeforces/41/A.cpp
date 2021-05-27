#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string inp1,inp2;
    cin>>inp1;
    cin>>inp2;
    if(inp1.length()!=inp2.length()){
        cout<<"NO";
        return 0;
    }else{
        reverse(inp1.begin(),inp1.end());
        if(inp1==inp2){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }
    return 0;
}
