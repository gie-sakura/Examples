/*Reservar memoria con calloc para una cadena de caracteres.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    
    char *p_nombre;
    char nombre[50];

    printf("Digite una palabra: ");
    scanf("%s",nombre);
    p_nombre=calloc(strlen(nombre)+1,sizeof(char));
    strcpy(p_nombre,nombre);
    printf("Palabra: %s\n",p_nombre);
    free(p_nombre);

    return 0;
}
