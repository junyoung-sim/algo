#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N;

  scanf("%d", &N);

  int* v = (int*)malloc(N * sizeof(int));

  for(int i = 0; i < N; i++) {
    scanf("%d", &v[i]);
  }

  for(int i = 0; i < N; i++) {
    
    int k = -1;
    int m = 1000;
    
    for(int j = i; j < N; j++) {
      if(v[j] < m) {
        m = v[j];
        k = j;
      }
    }
    
    int tmp = v[i];
    
    v[i] = m;
    v[k] = tmp;

    printf("%d\n", v[i]);

  }

  return 0;
}