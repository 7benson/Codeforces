#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string inp;
    cin>>inp;
    int i,lucky_nums=0;
    for(i=0;i<inp.length();i++){
        if(inp[i]=='7' || inp[i]=='4'){
            lucky_nums+=1;
        }
    }
    if(lucky_nums==7 || lucky_nums==4){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
