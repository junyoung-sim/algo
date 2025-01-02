#include <stdio.h>
#include <stdlib.h>

int** init
(
  int n,
  int m
) {

  int** x;

  x = (int**)malloc(n * sizeof(int*));
  for(int i = 0; i < n; i++) {
    x[i] = (int*)malloc(m * sizeof(int));
    for(int j = 0; j < m; j++) {
      scanf("%d", &x[i][j]);
    }
  }

  return x;

}

int main()
{
  int n;
  int m;

  scanf("%d %d", &n, &m);

  int** a = init(n, m);
  int** b = init(n, m);

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      printf("%d ", a[i][j] + b[i][j]);
    }
    printf("\n");
  }

  for(int i = 0; i < n; i++) {
    free(a[i]);
    free(b[i]);
  }
  free(a);
  free(b);

  return 0;
}