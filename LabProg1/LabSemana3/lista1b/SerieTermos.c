#include <stdio.h>

double potencia(double numero, double expoente) {

    double resultado = 1;

    for(int i = 0; i < expoente; i++)

    resultado *= numero;

    return resultado;
}

double fatorial(int numero) {
    double resultado = 1;

    for (int i = 1; i <= numero; i++) {
        
        resultado *= i;

    }

    return resultado;
}


int main(){

    double quantidade, x, total;

    scanf("%lf %lf",&quantidade, &x);

    total = 0;
    double denominador = 1;
    double somador = 1;

    for (int i = 0; i < quantidade; i++) {

        if(denominador == 1) {
            somador = 1;
        } else if(denominador == 3) {
            somador = -1;

        }

        if ((i+2) % 2 == 0) {
            total -= potencia(x, i+2)/fatorial(denominador);

        }
        else {
            total += potencia(x, i+2)/fatorial(denominador);
        }

        denominador += somador;
    }

    printf("%.2lf\n", total);

    return 0;
}