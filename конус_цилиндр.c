#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
  // put your code here
double h, r, P, V1, V2;
scanf("%lf %lf", &r, &h);
P = 3.14159265358979323846;
V1 = P * pow(r,2) * h;
V2 = ((P / 3) * pow(r,2) * h);
printf("%.2lf %.2lf", V1, V2);
  return 0;
}
