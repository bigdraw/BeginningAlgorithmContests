#include <stdio.h>
#include <math.h>
int main()
{
    const double pi = 4*atan(1);
    double n;
    scanf("%lf", &n);
    double m = n/180*pi;
    printf("%lf %lf\n", sin(m), cos(m));
    return 0;
}