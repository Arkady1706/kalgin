#include <stdio.h>
#include <math.h>
int main(void) {
	// put your code here
	int S, Sg, V, x;
	scanf("%d", &x);
	S = (6*pow(x,x));
	Sg = x*x;
	V = x*x*x;
	printf("%d %d %d", Sg, S, V);
	return 0;
}

