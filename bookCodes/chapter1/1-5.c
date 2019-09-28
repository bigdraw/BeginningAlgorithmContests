#include <stdio.h>
#include <math.h>
int main()
{
    const double pi_me = 3.1415926;
    const double pi_it = 4.0 * atan(1.0);
    double r, h, s1, s2, s, s1_me;
    scanf("%lf%lf", &r, &h);
    s1 = pi_it * r * r;
    s1_me = pi_me * r * r;
    s2 = 2 * pi_it * r * h;
    s = s1 * 2.0 + s2;
    printf("Area = %.3lf\n", s);
    //printf("%.6lf  %.6lf | %.6lf %.6lf", pi_me, pi_it, s1, s1_me);
    return 0;
}