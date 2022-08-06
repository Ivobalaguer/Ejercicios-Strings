#include <stdio.h> 
#include <string.h>

main()
{
    char texto[20]; 
    int longitud;   

do{

    printf("Ingrese una palabra: ");  
    scanf("%s", texto); 

	longitud = strlen(texto);   

    if(longitud > 20){  
        printf("\nLa palabra ingresada debe tener maximo 20 caracteres. Por favor vuelva a intentarlo\n\n");
    }

}while (longitud > 20); 

printf( "\nLa cadena \"%s\" tiene %i caracteres.\n\n", texto, longitud );  

system("pause");

return 0;

}