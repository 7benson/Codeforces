#include <iostream>
#include <vector>
using namespace std;

int main(){
    string inp;
    cin>>inp;
    vector<int> numbers;
    int e = inp.find('+');
    int start=0;
    while(e!=-1){
        string temp=inp.substr(start,e-start);
        numbers.push_back(stoi(temp));
        start = e + 1;
        e = inp.find("+", start);
    }
    if(e==-1){
        string temp=inp.substr(start,inp.length());
        numbers.push_back(stoi(temp));
    }
    int i,j,temp;
    for(i=0;i<numbers.size();i++){
        temp=numbers[i];
        for(j=i-1;j>=0 && numbers[j]>temp ;j--){
            numbers[j+1]=numbers[j];
        }
        numbers[j+1]=temp;
    }
    for(int i=0;i<numbers.size()-1;i++){
        cout<<numbers[i]<<"+";
    }
    cout<<numbers[numbers.size()-1];
}
