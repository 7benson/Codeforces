#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int opinions[3]={0,0,0};
    int two_yes=0,total=0;
    for(int i=0;i<n;i++){
        two_yes=0;
        scanf("%d %d %d",&opinions[0],&opinions[1],&opinions[2]);
        for(int j=0;j<3;j++){
            if(opinions[j]==1){
                two_yes+=1;
            }
        }
        if(two_yes>=2){
            total+=1;
        }
    }
    cout<<total;
    return 0;
}
