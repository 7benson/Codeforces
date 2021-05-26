#include <iostream>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    string inp;
    cin>>inp;
    int i=0;
    int ans=0;
    for(i=0;i<n-1;i++){
        if(inp[i]==inp[i+1]){
            ans+=1;
        }
    }
    cout<<ans;
}
