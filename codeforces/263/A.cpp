#include <iostream>
using namespace std;

int * get_position(int arr[5][5]){
    int i,j;
    static int a[2];
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(arr[i][j]==1){
                a[0]=i;
                a[1]=j;
                return a;
            }
        }
    }
}
int main(){
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //int arr[5][5]={{0,0,0,0,0},{0,0,0,0,1},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};

    //for(int i=0;i<5;i++){
    //    for(int j=0;j<5;j++){
    //        cout<<(arr[i][j]);
    //    }
    //}

    int steps=0,i,j;
    int *ptr;
    while(arr[2][2]!=1){
        steps+=1;
        ptr=get_position(arr);
        i=*ptr;
        j=*(ptr+1);
        arr[i][j]=0;
        if(i<2){
            i+=1;
            arr[i][j]=1;
            continue;
        }else if(i>2){
            i-=1;
            arr[i][j]=1;
            continue;
        }

        if(j<2){
            j+=1;
            arr[i][j]=1;
            continue;
        }else if(j>2){
            j-=1;
            arr[i][j]=1;
            continue;
        }
    }
    cout<<steps<<endl;
}
