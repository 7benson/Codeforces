#include <iostream>
using namespace std;
int main(){
    string inp1,inp2,ans="";
    cin>>inp1;
    cin>>inp2;
    int i;
    for(i=0;i<inp1.length();i++){
        if(inp1[i]==inp2[i]){
            ans+="0";
        }else{
            ans+="1";
        }
    }
    cout<<ans;
}
