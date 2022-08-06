#include <stdio.h>
#include <string.h>

#define FIN "FIN"

int main(){


	char temporalNombre[100]; 
	char nombreFinal[100]; 

	while(strcmp(temporalNombre, FIN) != 0){ 

		printf("\nIntroducir nombre: ");
		scanf("%s" ,temporalNombre);

		if(strcmp(temporalNombre, nombreFinal) < 0) strcpy(nombreFinal ,temporalNombre); 
	}

	printf("\n\nEl mayor nombre alfabeticamente es: %s\n" ,nombreFinal); 

	system("pause");
	return 0;
}
