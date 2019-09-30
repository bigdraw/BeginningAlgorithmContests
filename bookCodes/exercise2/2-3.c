#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=n;i>=1;i--)
    {
        for(int ii=0;ii<n-i;ii++)
            printf(" ");
        for(int j=0;j<2*(i-1)+1;j++)
            printf("#");
        printf("\n");
    }
}