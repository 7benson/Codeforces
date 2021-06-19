#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<algorithm>
long long n,m,cnt;
int main(){
	scanf("%I64d%I64d",&n,&m);
	cnt=0;
	while (1){
	  if (n<=0||m<=0) break;
	  if (n==1&&m==1) break;
	  if (n>m) std::swap(n,m);
	  n+=1;
	  m-=2;
	  cnt++;
	}
	printf("%I64d\n",cnt);
}