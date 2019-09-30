#define LOCAL

#include <stdio.h>
int main()
{
    #ifdef LOCAL
        freopen("data2-4.in","r",stdin);
        freopen("data2-4.out","w",stdout);
    #endif
    int n,m;
    int caseCount=0;
    while(scanf("%d%d",&n,&m)==2&&n&&m)
    {
        double sum=0.0;
        double term=0.0;
        for(int i =n;i<=m;i++)
        {
            term = 1.0/i/i;
            sum +=term;                          
        }
        printf("Case %d: %.5lf\n", caseCount, sum);
        caseCount++;
    }
    return 0;
}