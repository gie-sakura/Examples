/*1. Pedir una cadena de caracteres al usuario, posteriormente utilizar malloc para reservar memoria para esa cadena de caracteres (string)*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char nombre[20],*p_nombre;
    int longitud;
    
    printf("Digite su nombre: ");
    scanf("%s",nombre);

    longitud = strlen(nombre);
    p_nombre=malloc((longitud+1)*sizeof(char));

    strcpy(p_nombre,nombre);
    printf("Nombre Guardado: %s\n",p_nombre);
    
    return 0;
}

