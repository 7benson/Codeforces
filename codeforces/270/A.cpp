#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,x,i,k;
    float j;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&x);
        for(i=3;i<=400;i++){
            j=((i-2.0)*180)/i;
            if(j==(float)x){
                printf("YES\n");
                break;
            }
            if(j>(float)x){
                printf("NO\n");
                break;
            }
        }
    }
    return 0;
}