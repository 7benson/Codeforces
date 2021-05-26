#include <iostream>
using namespace std;
int main(){
    int w=2;
    scanf("%d",&w);

    if(w%2==0 && int(w/2)>=1 && w!=2 && w>0 && w<=100){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
