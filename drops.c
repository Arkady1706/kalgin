#include <stdio.h>
#include<math.h>
int main() {
  // put your code here
  int gl, dr;
  double ml, sum;
  scanf("%d", &gl); 
  sum = gl * 249.5;
  dr = sum / 0.05;
  ml = (sum / (3 * pow(10,-23)));
  printf("%d %.3e", dr, ml);
  return 0;
}
