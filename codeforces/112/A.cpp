#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string string1,string2;
    cin>>string1;
    cin>>string2;
    transform(string1.begin(),string1.end(),string1.begin(),::tolower);
    transform(string2.begin(),string2.end(),string2.begin(),::tolower);
    for(int i=0;i<string1.length();i++){
        if(int(string1[i])>int(string2[i])){
            cout<<"1";
            return 0;
        }else if(int(string1[i])<int(string2[i])){
            cout<<"-1";
            return 0;
        }
    }
    cout<<"0";
    return 0;
}
