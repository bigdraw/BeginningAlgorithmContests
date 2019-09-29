#include <stdio.h>
#include<math.h>
int main()
{
    double sum=0;
    double term = 100;
    int i = 0;
    while(fabs(term) > 1e-6)
    {
        term = 1.0/(i*2+1);        
        if(i%2==1) sum -= term;
        else sum += term;
        i++;        
    }
    printf("%.6lf\n", sum);
    return 0;
}