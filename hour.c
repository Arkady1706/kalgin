#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
  // put your code here
int s, h, min1, min2;
scanf("%d", &s);
h = s / 60 / 60;
min1 = s / 60;
min2 = min1 % 60;
printf("%d %d", h, min2);
  return 0;
}
