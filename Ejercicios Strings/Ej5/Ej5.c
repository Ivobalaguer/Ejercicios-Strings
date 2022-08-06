

#include <stdio.h>
#include <ctype.h>

int contarLetraA(char *cadena);  

int main(int argc, char const *argv[])
{
	
	char entrada[1000];
	printf("Ingresee una palabra:\n"); 
	gets(entrada); 
	int a = contarLetraA(entrada); 
	printf("El numero de vocales que tiene la cadena es: %d\n", a); 

	system("pause");
	return 0;
}

int contarLetraA(char *cadena){
	int a = 0;

	for (int indice = 0; cadena[indice] != '\0'; ++indice){ 

		char letraActual = tolower(cadena[indice]);	

		if (
			letraActual == 'a' || 
			letraActual == 'e' || 
			letraActual == 'i' || 
			letraActual == 'o' || 
			letraActual == 'u'
			)
        {
            a++; 
        }	 
	
	}
	return a;
}