//suma de cifras
#include <stdio.h>
#include <math.h>

int main() {
    int numero, suma = 0;
    
    printf("Ingrese un n�mero: ");
    scanf("%d", &numero);
    
    while (numero != 0) {
        suma += numero % 10;
        numero /= 10;
    }
    
    printf("La suma de los d�gitos es: %d\n", suma);
    
    return 0;
}
