#include<stdio.h>
#include<math.h>
int main() {
	double p, s;
        int r, R, w;
	scanf("%d %d",&r,&R);
	p = 3.14159265358979323846;
	w = R - r;
	s = p * (pow(R,2) - pow(r,2)) * 100;
	printf("%d %.2lf", w, s);
	return 0;
}
