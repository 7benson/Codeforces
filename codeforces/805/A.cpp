#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;

int main(){
    int l,r;
    while(scanf("%d%d",&l,&r)!=EOF){
        if(l == r) printf("%d\n",l);
        else if(r > 2) printf("2\n");
        else printf("1\n");
    }
    return 0;
}