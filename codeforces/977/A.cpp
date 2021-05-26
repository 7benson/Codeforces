#include <iostream>
using namespace std;
int main(){
    int n=512,k=4;
    scanf("%d %d",&n,&k);
    for(int i=0;i<k;i++){
        if(n%10==0){
            n=n/10;
        }else{
            n-=1;
        }
    }
    cout<<n;
}
