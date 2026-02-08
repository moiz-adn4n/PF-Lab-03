#include <stdio.h>

int main() {
    double num;
    scanf("%lf", &num);

    printf("%lf\n", num);
    printf("%.2lf\n", num);
    printf("%.5lf\n", num);

    return 0;
}
