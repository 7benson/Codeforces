#include <iostream>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int i,a,b,rooms=0;
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        if(b-a>=2){
            rooms++;
        }
    }
    cout<<rooms;
}
