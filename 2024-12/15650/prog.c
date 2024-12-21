#include <stdio.h>
#include <stdlib.h>

int N;
int M;

int used[9] = {-1, 0, 0, 0, 0, 0, 0, 0, 0};

void func(int *v, int m, int x) {
  v[m] = x;
  if(m == M-1) {
    for(int i = 0; i < M; i++) {
      printf("%d ", v[i]);
    }
    printf("\n");
    return;
  }

  for(int n = 1; n <= N; n++) {
    if(used[n] || v[m] > n) continue;

    used[n] = 1;
    func(v, m+1, n);
    used[n] = 0;
  }
}

int main(int argc, char *argv[])
{
  scanf("%d %d", &N, &M);

  int *v = (int*)malloc(M * sizeof(int));

  for(int n = 1; n <= N; n++) {
    used[n] = 1;
    func(v, 0, n);
    used[n] = 0;
  }

  free(v);

  return 0;
}