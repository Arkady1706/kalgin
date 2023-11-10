#include <stdio.h>
#include <math.h>
int main() {
    // put your code here
    double x, e1, e2;
    scanf("%lf", &x);
    e1 = exp(x);
    e2 = 1 + x/1 + pow(x,2)/2 + pow(x,3)/6 + pow(x,4)/24 + pow(x,5)/120;
    printf("%.6lf\n", e1);
    printf("%.6lf\n", e2);
    return 0;
}
