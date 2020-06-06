#include <stdio.h>
#include <stdlib.h>

//Lidia Lozano Guajardo - 1902187

int fi (int f){
   if ((f==0) || (f==-1))
   return 1;
   else return fi(f-1) + fi(f-2);
}

int main() {
	printf("---Bienvenido---\n");
	int i,tot;
	printf("Posicion Valor\n");
    printf("    1 ");
    printf("    0\n");
    printf("    2     1\n");
    printf("    3     1\n");
    for (tot=1;tot<=20;tot++){
        i=fi(tot);
        printf("%5d %5d\n",tot+3,i);
        }
	return 0;
}
