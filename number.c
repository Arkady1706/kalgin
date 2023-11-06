#include <stdio.h>
#include <math.h>
int main() {
	int M, N, n1a, n2, sum, n1;
	scanf("%d %d", &M, &N);
        sum = M * 10 / N;
	n2 = sum % 10;
	n1a = M / N;
	n1 = n1a % 10;
printf("%d %d", n1, n2);
  // put your code here
  return 0;
}
