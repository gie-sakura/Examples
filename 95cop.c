/*Pedir al usuario que digite una cadena, luego copiar su contenido hacia otro array de caracteres. Y por ultimo modificar su mensaje poniendo a partir de la posicion 10 "buena broma"*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char cad1[100],cad[100],*p_cad1;
    int longitud;

    printf("Digite una frase sin espacios: ");
    scanf("%s",cad1);
    longitud=strlen(cad1);
    p_cad1=malloc(longitud*sizeof(char));
    strcpy(p_cad1,cad1);
    strcpy(cad,p_cad1);
    strcpy(cad+10,"Buena broma");
    printf("%s\n",cad);

    return 0;
}
