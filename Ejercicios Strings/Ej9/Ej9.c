#include <stdio.h>
#include <string.h>
int main (){

    char cadena[30] = {0}; 

    printf("Ingrese una palabra (Hasta 20 letras en MATUSCULA): "); 
    scanf("%s", cadena); 

    for (int i = 0; i < strlen(cadena); i++){ 

        cadena[i] = (cadena[i] + 3); 
        if (cadena[i] + 3 > 90) cadena[i] = cadena[i] - 26; 

    }
    printf("\nPalabra codificada: %s\n", cadena); 

    system("pause");
	return 0;

}
