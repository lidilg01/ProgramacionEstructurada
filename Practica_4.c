#include <stdio.h>
#include <stdlib.h>

/* Lidia Lozano Guajardo - 1902187 */

int main() {
	float num1, num2, resultado;
	char op;
	printf("Calculadora basica\n");
	printf("Introduzca el primer numero\n");
	scanf("%f",&num1);
	printf("Introduzca el segundo numero\n");
	scanf("%f",&num2);
	printf("Introduzca la operacion a realizar\n");
	scanf(" %c", &op);
	switch(op){
		case'+':
			resultado=num1 + num2;
			break;
		case'-':
			resultado=num1 - num2;
			break;
		case'*':
			resultado=num1*num2;
			break;
		case'/':
			resultado=num1/num2;
			break;
		default:
			printf("Operador Invalido\n");
			
	}
	printf("%.2f %c %.2f = %.2f",num1,op,num2,resultado);
	return 0;
}
