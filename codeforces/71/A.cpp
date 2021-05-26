#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    vector<string> strings;
    for(int i=0; i<n;i++){
        string temp;
        cin>>(temp);
        if(temp.length()>10){
            temp=temp[0]+to_string(temp.length()-2)+temp[temp.length()-1];
        }
        strings.push_back(temp);
    }
    for(int i=0;i<n;i++){
        cout<<strings[i]+'\n';
    }
    return 0;
}
