#include <stdio.h>
#include <stdlib.h>

int main()
{
  int  n;
  int* x;
  int  v;
  int  c;
  
  scanf("%d", &n);

  x = (int*)malloc(n * sizeof(int));

  for(int i = 0; i < n; i++) {
    scanf("%d", &x[i]);
  }

  scanf("%d", &v);

  c = 0;
  for(int i = 0; i < n; i++) {
    c += (x[i] == v);
  }

  printf("%d\n", c);

  free(x);

  return 0;
}