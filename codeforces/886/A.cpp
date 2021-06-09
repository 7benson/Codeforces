#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char const *argv[]) {
    int a[1000],sum1,sum=0;
    int i,j,k;
    for(i=0;i<6;i++){
      std::cin >> a[i];
      sum=sum+a[i];
    }
    for(i=0;i<4;i++){
      for(j=i+1;j<5;j++){
        for(k=j+1;k<6;k++){
          sum1=a[i]+a[j]+a[k];
          if(sum1==sum-sum1){
            std::cout << "YES" << '\n';
            exit(0);
          }

        }
      }
    }
    std::cout << "NO" << '\n';
  return 0;
}