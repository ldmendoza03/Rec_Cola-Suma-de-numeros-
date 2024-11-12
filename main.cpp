#include <stdio.h>
#include "operaciones.h"

int main() {
    int n;
    // Solicita el valor de n al usuario
    printf("Introduce un número entero no negativo para calcular la suma: ");
    while (scanf("%d", &n) != 1 || n < 0) {  // Validación: solo acepta enteros no negativos
        printf("Entrada no válida. Introduce un número entero no negativo: ");
        while (getchar() != '\n'); // Limpia el buffer de entrada
    }

    printf("Suma de %d: %d\n", n, suma_tail(n));
    return 0;
}


//5+4+3+2+1+0=15