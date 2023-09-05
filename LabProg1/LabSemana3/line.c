#include <stdio.h>

int main() {
	
	int numero;

	scanf("%d", &numero);

	for (int i = 0; i <= numero; i++) {
        for(int j = 1; j < i+1; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

	return 0;
}