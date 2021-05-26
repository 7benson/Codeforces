#include <iostream>
using namespace std;
int main(){
    int x=5,steps=0;
    scanf("%d",&x);
    while(x>0){
        steps+=1;
        if(x-5>=0){
            x-=5;
        }else if(x-4>=0){
            x-=4;
        }else if(x-3>=0){
            x-=3;
        }else if(x-2>=0){
            x-=2;
        }else if(x-1>=0){
            x-=1;
        }
    }
    cout<<steps;
}
