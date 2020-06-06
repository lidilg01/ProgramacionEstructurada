#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Lidia Lozano Guajardo - 1902187 */

	int i,j,x,mat[10];
	char alumnos[10][9][100];

void validacion();

void impresion();

void captura();



		int main() {
			printf("Bienvenido\n");

			captura();
	
			impresion();
		return 0;
	}
	
	
void validacion(){
	mat[i]=alumnos[i][0] ;
	if(i>1){
		for(x=0;x<10;x++){
			if(mat[i]==mat[x]){
				printf("Matricula ya ingresada, intente de nuevo  ");
				scanf("%s",&alumnos[i][0]);
			}
		}
	}
}
void impresion(){
	printf("Matricula\tNombre\t\tApellido_Paterno\tApellido_Materno\tFecha_de_Naciemiento\tFacultad\tSemestre\t\tCarrera\t\tSexo\n");
	
	for(i=0;i<10;i++){
		for(j=0;j<9;j++){
		printf(" %10s\t",alumnos[i][j]);
		}
	printf("\n");
	}
}
void captura(){
	for(i=0;i<10;i++){
	printf("\nIngrese la matricula del estudiante %d ",i+1);
		scanf("%s",&alumnos[i][0]);
		validacion();
		printf("\nIngrese el nombre del estudiante  ");
		scanf("%s",&alumnos[i][1]);
		printf("\nIngrese el primer apellido del estudiante  ");
		scanf("%s",&alumnos[i][2]);
		printf("\nIngrese el segundo apellido del estudiante  ");
		scanf("%s",&alumnos[i][3]);	
		printf("\nIngrese la fecha de nacimiento del estudiante dd/mm/aaaa  ");
		scanf("%s",&alumnos[i][4]);
		printf("\nIngrese el nombre de la facultad del estudiante  ");
		scanf("%s",&alumnos[i][5]);
		printf("\nIngrese el semestre del estudiante  ");
		scanf("%s",&alumnos[i][6]);
		printf("\nIngrese la carrera del estudiante  ");
		scanf("%s",&alumnos[i][7]);
		printf("\nIngrese el genero del estudiante F-femenino M-masculino  ");
		scanf("%s",&alumnos[i][8]);
		
		system("cls");
	}
}
