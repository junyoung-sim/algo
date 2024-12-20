#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  double A;
  double B;

  scanf("%lf %lf", &A, &B);

  printf("%.13lf", A/B);

  return 0;
}