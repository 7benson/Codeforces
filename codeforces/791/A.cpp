#include <iostream>
using namespace std;
int main(){
    int s=1,b=1,y=0;
    scanf("%d %d",&s,&b);
    while(s<=b){
        y+=1;
        s=3*s;
        b=2*b;
    }
    cout<<y;
}
