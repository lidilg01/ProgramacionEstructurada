#include <stdio.h>
#include <stdlib.h>

/*Lidia Lozano Guajardo - 1902187*/

int main(int argc, char *argv[]) {
	int b,n,mult,x;
	printf("Ingrese el numero al que desea obtener los multiplos  ");
	scanf("%d",&b);
	printf("Ingrese la cantidad de multiplos  ");
	scanf("%d",&n);
	x=n;
	for(n=1;n<=x;n++){
		mult= b * n;
		printf("%d\t",mult);
	}
	return 0;
}
