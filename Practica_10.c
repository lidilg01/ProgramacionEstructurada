#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Lidia Lozano Guajardo 1902187 */
int i;
struct estudiantes{
	int matricula;
	char nombre[20];
	char apepat[20];
	char apemat[20];
	char fecha[10];
	char facultad[50];
	int sem;
	char carrera[50];
	char sexo;
};

int main() {
	int j,x;

	struct estudiantes alum[10];
	printf("Bienvenido\n");
	
	
	for(i=0;i<10;i++){
		printf("\nIngrese la matricula del estudiante %d ",i+1);
		scanf("%d",&alum[i].matricula);
	do{
		for(x=0;x<5;x++){
			if(alum[x+1].matricula==alum[x].matricula){
				printf("Matricula ya ingresada, intente de nuevo  ");
				scanf("%d",&alum[x].matricula);
			}
		}
	}while(alum[i].matricula==alum[i-1].matricula);
		printf("\nIngrese el nombre del estudiante  ");
		fflush(stdin);
		scanf("%s",alum[i].nombre);
		printf("\nIngrese el primer apellido del estudiante  ");
		fflush(stdin);
		scanf("%s",alum[i].apepat);
		printf("\nIngrese el segundo apellido del estudiante  ");
		fflush(stdin);
		scanf("%s",&alum[i].apemat);	
		printf("\nIngrese la fecha de nacimiento del estudiante dd/mm/aaaa  ");
		fflush(stdin);
		scanf("%s",&alum[i].fecha);
		printf("\nIngrese el nombre de la facultad del estudiante  ");
		fflush(stdin);
		scanf("%s",&alum[i].facultad);
		printf("\nIngrese el semestre del estudiante  ");
		fflush(stdin);
		scanf("%d",&alum[i].sem);
		printf("\nIngrese la carrera del estudiante  ");
		fflush(stdin);
		scanf("%s",&alum[i].carrera);
		printf("\nIngrese el genero del estudiante f-femenino m-masculino  ");
		fflush(stdin);
		scanf("%c",&alum[i].sexo);
		
		system("cls");
	}
	
	printf("Matricula\tNombre\t\tApellido_Paterno\tApellido_Materno\tFecha_de_Naciemiento\tFacultad\tSemestre\t\tCarrera\t\tSexo\n");
	
	for(i=0;i<10;i++){
		printf(" %8d\t ",alum[i].matricula);
		printf(" %8s\t ",alum[i].nombre);
		printf(" %8s\t\t ",alum[i].apepat);
		printf(" %8s\t\t ",alum[i].apemat);
		printf(" %8s\t\t ",alum[i].fecha);
		printf(" %8s\t ",alum[i].facultad);
		printf(" %8d\t ",alum[i].sem);
		printf(" %7s\t ",alum[i].carrera);
		printf(" %3c\t ",alum[i].sexo);
	printf("\n");
	}
	return 0;
}
