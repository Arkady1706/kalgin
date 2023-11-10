#include <stdio.h>

int main() {
    // put your code here
    double e, e1, e2;
    e = 1 + (1/1 + (float)1/2 + (float)1/6);
    e1 = 1 + (1/1 + (float)1/2 + (float)1/6 + (float)1/24);
    e2 = 1 + (1/1 + (float)1/2 + (float)1/6 + (float)1/24 + (float)1/120);
    printf("%.5lf\n", e);
    printf("%.5lf\n", e1);
    printf("%.5lf", e2);
    return 0;
}
