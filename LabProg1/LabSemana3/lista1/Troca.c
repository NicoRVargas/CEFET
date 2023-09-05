#include <stdio.h>

int main() {

    int a, b, aux;

    scanf("%d %d", &a, &b);

    aux = a;
    a = b;
    b = aux;

    printf("A = %d B = %d\n", a, b);

    return 0;
}