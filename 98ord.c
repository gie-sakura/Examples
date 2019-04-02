/*Pedir n palabras al usuario y posteriormente ordenarlas alfabeticamente.Utilizar metodo de ordenamiento (Burbuja, insercion, seleccion).*/

#include<stdio.h>
#include<string.h>

int main(){
    int nump,i,min,j;
    char palabra[100][20],aux[20];

    printf("Ingrese numero de palabras: ");
    scanf("%i",&nump);

    //Guardado de palabras

    for(i=0;i<nump;i++){
	printf("Palabra %i: ",i+1);
	scanf("%s",palabra[i]);
    }
    
    //Ordenado por seleccion

    for(i=0;i<nump;i++){
	min=i;
	for(j=i+1;j<nump;j++){
	    if(strcmp(palabra[j],palabra[min])<0){
		min=j;
	    }
	}
	strcpy(aux,palabra[i]);
	strcpy(palabra[i],palabra[min]);
	strcpy(palabra[min],aux);
    }

    //Impresion de las palabras

    for(i=0;i<nump;i++){
	printf("%s\n",palabra[i]);
    }


    return 0;
}
