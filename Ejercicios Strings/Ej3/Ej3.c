

#include <stdio.h>
#include <string.h>

int main(void) {

    char texto1[20]; 
    char texto2[20];

    printf("Ingrese la primera palabra: ");  
    scanf("%s", texto1); 

    printf("Ingrese la segunda palabra: ");  
    scanf("%s", texto2); 

  if (strcmp(texto1, texto2) == 0) {    
    printf("Las cadenas son iguales");  
  } else {
    printf("Las cadenas NO son iguales");   
  }

  system("pause");
  
  return 0;
}