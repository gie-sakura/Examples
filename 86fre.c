/*Pedir al usuario una cadena de caracteres, reservar memoria con malloc(), almacenarlo en la memoria dinamica, posteriormente utilizar free() para liberar el espacio de memoria dinamica utilizado.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char nombre[20],*p_nombre;
    int longitud;
    printf("Digite una cadena: ");
    scanf("%s",nombre);
    longitud=strlen(nombre);
    p_nombre=malloc((longitud+1)*sizeof(char));
    strcpy(p_nombre,nombre);
    printf("El nombre guardado es: %s\n",p_nombre);
    free(p_nombre);
    printf("Ahora el nombre es: %s\n",p_nombre);

    return 0;
}
