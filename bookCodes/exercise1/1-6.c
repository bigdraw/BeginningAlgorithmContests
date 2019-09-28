#include <stdio.h>
#include <math.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x+y<=z||x+z<=y||y+z<=x)
        printf("not a triangle\n");    
    else if(x*x +y*y == z*z||x*x+z*z==y*y||y*y+z*z==x*x)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}