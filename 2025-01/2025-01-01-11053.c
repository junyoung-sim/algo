#include <stdio.h>
#include <stdlib.h>

int max
(
  int a,
  int b
) {

  return (a > b ? a : b);

}

int main()
{
  int n;

  scanf("%d", &n);

  int* v  = (int*)malloc(n * sizeof(int));
  int* dp = (int*)malloc(n * sizeof(int));

  for(int i = 0; i < n; i++) {
    scanf("%d", &v[i]);
    dp[i] = 1;
  }

  int ans = 1;

  for(int i = 1; i < n; i++) {
    for(int j = 0; j < i; j++) {
      if(v[j] < v[i] & dp[j] >= dp[i]) {
        dp[i] = dp[j] + 1;
        ans = max(dp[i], ans);
      }
    }
  }

  printf("%d\n", ans);

  free(v);
  free(dp);

  return 0;
}