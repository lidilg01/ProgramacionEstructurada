#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Lidia Lozano Guajardo - 1902187 */

	int i;
	FILE *alumnos;
struct estudiantes{
	int matricula;
	char nombre[20];
	char apepat[20];
	char apemat[20];
	char fecha[10];
	char facultad[50];
	int sem;
	char carrera[50];
	char sexo[10];
}alum[10];

void validacion();

void captura();



		int main() {
			char tit[50];
			printf("Bienvenido\n");

			captura();
	
			FILE *alumnos;
			alumnos=fopen("infoAlumnos.dat","w");
			
			impresionArchivo();
			
			fclose(alumnos);
		return 0;
	}
	
	
//void validacion(){
//	int x;
//		for(x=0;x<5;x++){
//			if(alum[x+1].matricula==alum[x].matricula){
//				printf("Matricula ya ingresada, intente de nuevo  ");
//				scanf("%d",&alum[x].matricula);
//			}
//	 }
//}
void captura(){
	for(i=0;i<10;i++){
	printf("\nIngrese la matricula del estudiante %d ",i+1);
		scanf("%d",&alum[i].matricula);
	//	validacion();
		printf("\nIngrese el nombre del estudiante  ");
		scanf("%s",&alum[i].nombre);
		printf("\nIngrese el primer apellido del estudiante  ");
		scanf("%s",&alum[i].apepat);
		printf("\nIngrese el segundo apellido del estudiante  ");
		scanf("%s",&alum[i].apemat);	
		printf("\nIngrese la fecha de nacimiento del estudiante dd/mm/aaaa  ");
		scanf("%s",&alum[i].fecha);
		printf("\nIngrese el nombre de la facultad del estudiante  ");
		scanf("%s",&alum[i].facultad);
		printf("\nIngrese el semestre del estudiante  ");
		scanf("%d",&alum[i].sem);
		printf("\nIngrese la carrera del estudiante  ");
		scanf("%s",&alum[i].carrera);
		printf("\nIngrese el genero del estudiante Femenino Masculino  ");
		scanf("%s",&alum[i].sexo);
		
		system("cls");
	}
}

void impresionArchivo(){
	for(i=0;i<10;i++){
	fprintf(alumnos,"Matricula: %d\n",alum[i].matricula);
	fprintf(alumnos,"Nombre: %d\n",alum[i].nombre);
	fprintf(alumnos,"Primer Apellido: %d\n",alum[i].apepat);
	fprintf(alumnos,"Segundo Apellido: %d\n",alum[i].apemat);
	fprintf(alumnos,"Fecha de Nacimiento: %d\n",alum[i].fecha);
	fprintf(alumnos,"Facultad: %d\n",alum[i].facultad);
	fprintf(alumnos,"Semestre : %d\n",alum[i].sem);
	fprintf(alumnos,"Carrera: %d\n",alum[i].carrera);
	fprintf(alumnos,"Genero: %d\n",alum[i].sexo);
	}
			printf("\n");
}
