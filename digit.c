#include <stdio.h>
int main() {
  // put your code here
  int A;
  double a, b, c, d, res;
  scanf("%4d", &A);
  a = A%10;
  b = A%100/10;
  c = A%1000/100;
  d = A/1000;
  res = ((d * b) / (a * c));
  printf("%.2lf", res);
  return 0;
}
