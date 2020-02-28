#include <stdio.h>
#include <stdlib.h>

/* Lidia Lozano Guajardo - 1902187 */

int main() {
	int num=0,sum=0,cant=0;
	float prom = 0;
	printf("Bienvenido\nPara terminar ingrese -1");
	while(num>=0){
		sum = sum + num;
		cant++;
		printf("\nIngrese su numero ");
		scanf("%d",&num);
	}
	prom = ((float)sum)/(cant-1);
	printf("El suma de los numeros ingresados es: %d\nLa cantidad de numeros es: %d\nEl promedio de los numeros es: %f",sum,cant-1,prom);
	
	return 0;
}
