#include <iostream>
using namespace std;
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int scores[n];
    for(int i=0;i<n;i++){
        scanf("%d",&scores[i]);
    }
    int total=0;
    if(scores[0]==0 && scores[k-1]==0){
        cout<<'0';
    }else if(scores[k-1]==0){
        for(int i=0;i<n;i++){
            if(scores[i]>0){
                total+=1;
            }
        }
        cout<<total;
    }else{
        for(int i=0;i<n;i++){
            if(scores[i]>=scores[k-1]){
                total+=1;
            }
        }
        cout<<total;
    }
    return 0;
}
