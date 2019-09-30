#define LOCAL
#include <stdio.h>
int main()
{
    int a,b,c;
    int existAnser=0;
    int caseCount=1;
    #ifdef LOCAL
        freopen("data2-2.in","r",stdin);
        freopen("data2-2.out","w",stdout);
    #endif

    while(scanf("%d%d%d",&a,&b,&c)==3)
    {
        existAnser = 0;
        for(int i=10;i<=100;i++)
        {
            if(i%3==a && i%5==b && i%7==c)
            {
                existAnser = 1;
                printf("Case %d: %d\n", caseCount, i);
                break;
            }
        }
        if(existAnser==0) printf("Case %d: No Answer\n", caseCount);
        caseCount++;
    }
    return 0;
}