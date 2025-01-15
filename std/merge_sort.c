#include <stdio.h>
#include <stdlib.h>

int N;

void merge
(
  int* v,
  int  p,
  int  q,
  int  r
) {

  int i = p;
  int j = q+1;
  int k = 0;

  int* tmp = (int*)malloc(N * sizeof(int));

  while(i <= q && j <= r) {
    tmp[k++] = (v[i] < v[j] ? v[i++] : v[j++]);
  }
  while(i <= q) tmp[k++] = v[i++];
  while(j <= r) tmp[k++] = v[j++];

  i = p;
  k = 0;

  while(i <= r) v[i++] = tmp[k++];

  free(tmp);

}

void merge_sort
(
  int* v, 
  int  p,
  int  r
) {

  if(p < r) {
    int q = (p + r) / 2;
    merge_sort(v, p, q);
    merge_sort(v, q+1, r);
    merge(v, p, q, r);
  }

}

int main()
{
  scanf("%d", &N);

  int* v = (int*)malloc(N * sizeof(int));

  for(int i = 0; i < N; i++) {
    scanf("%d", &v[i]);
  }

  merge_sort(v, 0, N-1);

  for(int i = 0; i < N; i++) {
    printf("%d ", v[i]);
  }
  printf("\n");

  free(v);

  return 0;
}