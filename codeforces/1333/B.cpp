#include<bits/stdc++.h>
using namespace std;
signed main()
{
	int T;
	cin >> T;
	while(T--)
    {
        int n;
        cin>>n;
        int a[n+10],b[n+10];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        int flag1=0,flag2=0;
        int flag =0;
        for(int i=0;i<n;i++){
 
            if(a[i]<b[i]&&flag1==0)
            {
                flag = 1;
                break;
            }
            if(a[i]>b[i]&&flag2==0)
            {
                flag =1;
                break;
            }
            if(a[i]<0)
                flag2 = 1;
            if(a[i]>0)
                flag1= 1;
        }
        if(flag==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
 
    }
	return 0;
}