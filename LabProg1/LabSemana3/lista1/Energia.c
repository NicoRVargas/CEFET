#include <stdio.h>

int main() {

    int salario, quilowatts, total;

    scanf("%d %d", &salario, &quilowatts);

    total = (salario/7) * quilowatts/100;

    printf("Gasto: %d\n", total);

    return 0;
}