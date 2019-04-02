/*Pedir una cadena al usuario y luego invertirla, diciendo ademas decir cuantos caracteres tiene*/

#include<stdio.h>
#include<string.h>

int main(){

    char cad3[20],cad[20],aux;
    int longitud,i;

    printf("Ingrese cadena: ");
    scanf("%s",cad);
    //strrev(cad); No funciona en Linux
    longitud=strlen(cad);
    for(i=0;i<=(longitud);i++){
	aux=cad[(longitud-1)-i];
	cad3[i]=aux;
    }
    printf("\nLa cadena %s invertida es %s y tiene %i caracteres.\n",cad,cad3,longitud);

    return 0;

}
