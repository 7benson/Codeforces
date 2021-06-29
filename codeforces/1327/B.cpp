#include <iostream>
#include<cstdlib>
using namespace std;
const int maxn =  1e5 +10;
int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int a[maxn] = {0}, b[maxn] = {0};
        int n, cnt = 0, index;
        scanf("%d", &n);
        for(int i = 1; i <= n; i++)
        {
            int num, flag = 0;
            scanf("%d", &num);
            for(int j = 1; j <= num; j++)
            {
                int e;
                scanf("%d", &e);
                if(flag == 0 && b[e] == 0)
                {
                    a[i] = e;//The i-th princess matches the e-th prince    
                    flag = 1;
                    cnt ++;
                    b[e] = 1;//There are already cnt princesses matching the prince
                }
            }
            if(flag == 0)
                index = i;//Princess serial number used to mark as a match
        }
        if(cnt == n)
        {
            printf("OPTIMAL\n");
        }
        else
        {
            printf("IMPROVE\n");
            for(int j = 1; j <= n; j++)
            /*If you do not use index to mark the unmatched princess and use double loop, it will TLE*/
            {
                if(b[j] == 0)
                {
                    printf("%d %d\n", index, j);
                    break;
                }
            }
        }
    }
    return 0;
}

