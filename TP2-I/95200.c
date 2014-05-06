#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TDA_Project.h"

int main ( int argc, char* argv[] )
{
	if (argc==2){
		
		Project pProject;
		
		CrearProj(&pProject);
		CargarProj(&pProject,argv[1]);
		
		char* Salida="";
		char fecha[11]="";
		printf("identificador: %s\n",Get_id(&pProject));
		Get_members_name(&pProject,&Salida);
		printf("miembros: %s\n",Salida);
		printf("nombre: %s\n",Get_name(&pProject));
		strncpy(fecha,Get_created_at(&pProject),10);
		printf("fecha de creacion: %s\n",fecha);
		strncpy(fecha,Get_modified_at(&pProject),10);
		printf("ultima modificacion: %s\n",fecha);
		free(Salida);
		
		EliminarProj(&pProject);
		
	}
	return 0;
}