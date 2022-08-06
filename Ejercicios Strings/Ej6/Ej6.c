#include <stdio.h>
#include <ctype.h>

#define Tamaño 256 

int main () {

    char text[Tamaño * 4], 
        most_freq[Tamaño + 1] = "";
    int freq[Tamaño] = {0},
        max = 0, 
        mf_ndx = 0; 
    
    fputs ("Ingresar una palabra: ", stdout); 
    if (!fgets (text, Tamaño, stdin)) { 
        puts ("Entrada Invalida");
        return 0;
    }
    
    for (int i = 0; text[i]; i++) 
        if (++freq[(unsigned char)text[i]] > max) 
            max = freq[(unsigned char)text[i]];
    
    for (int i = '!'; i < Tamaño; i++) 
        if (freq[i] == max) 
            most_freq[mf_ndx++] = i;               
    most_freq[mf_ndx] = 0;
    
    printf ("\n%d caracter/es aparecen frecuentemente %d veces: %s\n",
            mf_ndx, max, most_freq);

    system("pause");
    return 0;
}