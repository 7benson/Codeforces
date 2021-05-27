#include <iostream>
using namespace std;
int main(){
    string inp;
    int n;
    scanf("%d",&n);
    cin>>inp;
    int i,a=0,d=0;
    for(i=0;i<inp.length();i++){
        if(inp[i]=='A'){
            a++;
        }else{
            d++;
        }
    }
    if(a>d){
        cout<<"Anton";
    }else if(d>a){
        cout<<"Danik";
    }else{
        cout<< "Friendship";
    }
}
