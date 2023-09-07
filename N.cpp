//suma de numeros n
#INCLUDE <stdio.h>

int main(){
	
	int n, suma=0;
	printf ("ingrese cuantos numeros quiere sumar");
	scanf("%d", &n);
	
	while (int i=0; i < n; 1 ++){
		int numero;
		printf("ingrese un numero:");
		scanf("%d", &numero);
		suma+=numero;
	}
	printf("la suma es:%\n",suma);
	
	return 0;
	
	
}
