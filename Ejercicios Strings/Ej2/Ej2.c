#include <stdio.h>
#include <string.h>
#define Longitud 21
 
char *invertir(char cadena[]);
 
int main(void) {
  char cadena[Longitud];
  printf("Escribe una palabra (cuya longitud sea menor a %d): ", Longitud-1);   
 
  fgets(cadena, Longitud, stdin);  

  cadena[strcspn(cadena, "\r\n")] = 0;  
 
  printf("\nLa palabra invertida es: %s\n\n", invertir(cadena));   
  
system("pause");

return 0;

}

char *invertir(char cadena[]) {
  int longitud = strlen(cadena);  
  char temporal;  
  for (int izquierda = 0, derecha = longitud - 1; izquierda < (longitud / 2); izquierda++, derecha--) {   
    temporal = cadena[izquierda];
    cadena[izquierda] = cadena[derecha];
    cadena[derecha] = temporal;
  }
  return cadena; 
  
}
