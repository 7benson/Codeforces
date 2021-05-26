#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;
int main(){
    string inp;
    cin>>inp;
    transform(inp.begin(),inp.begin()+1,inp.begin(),::toupper);
    cout<<inp;
}
