#include <iostream>
using namespace std;
int main(){
    int n=4;
    scanf("%d",&n);
    int total=0,a,b,m=0;
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        total=total-a+b;
        if(total>m){
            m=total;
        }
    }
    cout<<m;
}
