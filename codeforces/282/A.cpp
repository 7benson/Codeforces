#include <iostream>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int ans=0;
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        if(temp[1]=='+'){
            ans+=1;
        }else{
            ans-=1;
        }
    }
    cout<<ans;
}
