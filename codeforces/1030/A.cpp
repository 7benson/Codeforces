#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        if(arr[i]==1){
            cout<<"HARD";
            return 0;
        }
    }
    cout<<"EASY";
}
