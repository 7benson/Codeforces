#include <iostream>
#include <set>
using namespace std;
int main(){
    string inp;
    cin>>inp;
    set<char> unik;
    for(int i=0;i<inp.length();i++){
        unik.insert(inp[i]);
    }
    if(unik.size()%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
}
