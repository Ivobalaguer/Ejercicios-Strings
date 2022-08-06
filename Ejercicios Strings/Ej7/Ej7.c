#include <stdio.h>
#include<string.h>


int main()
{
    
    int añosJoven; 
    int añosAux; 
    char nombreJoven[200]; 
    char aux[200]; 
    
    
    for(int i=0; i<=4; i++) 
    {
        printf("\nIngrese el nombre de la %d persona:",i+1); 
        scanf("%s",aux);
        
        printf("\nIngrese la edad de la %d persona:",i+1); 
        scanf("%d",&añosAux);

        
        if(i == 0) añosJoven = añosAux; 
        
        if(añosAux < añosJoven) 
        {
            añosJoven = añosAux;
            strcpy(nombreJoven,aux); 
        }
    }
    
    printf("\nLa persona mas joven se llama: %s. Con %d anos\n\n",nombreJoven, añosJoven); 

    system("pause");
	return 0;
    
}
