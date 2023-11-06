#include <stdio.h>
int main(void) {
	int K, res;
	scanf("%3d", &K);
	res = K + 99*(K%10) - 99*(K/100);
printf("%d",res);
return 0;
}

