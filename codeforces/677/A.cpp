#include <iostream>
using namespace std;
int main(){
    int n=3,h=7,i,width=0;
    scanf("%d %d",&n,&h);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]>h){
            width+=2;
        }else{
            width+=1;
        }
    }
    cout<<width;
}
