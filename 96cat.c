/*Pedir una cadena al usuario, posteriormente utilizar la funcion strcat() para añadir la frase "Que tengas un buen dia", al final de la cadena*/

#include<stdio.h>
#include<string.h>

int main(){

    char cad1[100];
    int c,cont=0;
    printf("Escribe algo: ");
    while((c=getchar())!=EOF){
	cad1[cont]=c;
	if(c==10){
	    break;
	}
	cont++;
    }

    strcat(cad1,"Que tengas un buen dia");
    printf("\n%s\n",cad1);

    return 0;
}
