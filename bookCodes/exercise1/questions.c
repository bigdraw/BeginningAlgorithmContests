#include <stdio.h>
#include<limits.h>
int main()
{
    int a=2,b=-2;
    int max=0, min=1;
    int countmax = 1, countmin=1;
    while(a>max){
        max = a;
        a*=2;
        countmax++;
    }
    while(b<min){
        min = b;
        b*=2;
        countmin++;
    }
    printf("%d %d %d %d\n", max, min, countmax, countmin);
    //int-32bit, maxInt = 2147483647, minInt = -2147483648 :000000 --0, 1000000-minInt
    printf("%d %d", INT_MAX, INT_MIN);
    //return 0;
    a= 2;b=2;
    if(a==2)
        if(b>2)
            printf("1");
    else
        printf("2");
    return 0;
    
}