#include <stdio.h>

int main() {
    int i;
    float f;
    char c;

    scanf("%d", &i);
    scanf("%f", &f);
    scanf(" %c", &c);

    printf("%d\n%.2f\n%c", i, f, c);
    return 0;
}
