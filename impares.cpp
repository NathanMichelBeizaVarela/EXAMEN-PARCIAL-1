//numeros impares
#include <stdio.h>
#include <math.h>

int main() {
    int numero;
    
    printf("Ingrese un n�mero: ");
    scanf("%d", &numero);
    
    printf("N�meros impares hasta %d:\n", numero);
    
    for (int i = 1; i <= numero; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    
    return 0;
}
