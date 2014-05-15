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
		printf("identificador: %s\n",Get_id(&pProject));
		if (Get_members_name(&pProject,&Salida)!=0){
			printf("Error al consultar los Miembros.\n");
			return 0;
		}
		printf("miembros: %s\n",Salida);
		printf("nombre: %s\n",Get_name(&pProject));
		printf("fecha de creacion: %s\n",Get_created_at(&pProject));
		printf("ultima modificacion: %s\n",Get_modified_at(&pProject));
		free(Salida);
		
		EliminarProj(&pProject);
		
	}
	return 0;
}
