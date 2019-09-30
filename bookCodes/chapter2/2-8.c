#include<stdio.h>
#include<time.h>
int main(){
  const int MOD = 1000000;
  int i, j, n, S = 0;
  scanf("%d", &n);
  for(i = 1; i <= n; i++){
    int factorial = 1;
    for(j = 1; j <= i; j++)
      factorial =  factorial * j % MOD;
    S = (S + factorial)%MOD;
  }
  printf("%d\n", S % 1000000);
  //printf("Time Used = %.3lf", (double)clock() / CLOCKS_PER_SEC);
  //using much time - so make some tests and find the pattern of these numbers
  return 0;
}
