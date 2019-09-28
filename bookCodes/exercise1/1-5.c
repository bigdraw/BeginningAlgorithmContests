#include <stdio.h>
int main()
{
    const double price = 95;
    int n;
    double total, purchase;
    scanf("%d", &n);
    total = price*n;
    if(total>300)
        purchase = total*0.85;
    else
        purchase = total;
    printf("%.2lf", purchase);
    return 0;

}