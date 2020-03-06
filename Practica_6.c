#include <stdio.h>
#include <stdlib.h>

/* Lidia Lozano Guajardo - 1902187 */

int main() {
	int num=0,cant=0,sum=0;
	float prom = 0;
	printf("Bienvenido\nPara terminar ingrese -1");
	do{
		printf("\nIngrese su numero ");
		scanf("%d",&num);
		sum = sum + num;
		cant++;
	}while(num>=0);
		if(num<0){
			sum=sum-num;
			cant--;
		}
	prom = sum/cant;
	printf("El suma de los numeros ingresados es: %d\nLa cantidad de numeros es: %d\nEl promedio de los numeros es: %.2f",sum,cant,prom);
	
	return 0;
}
