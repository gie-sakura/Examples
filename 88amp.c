/*Reservar memoria para un arreglo de 5 numeros, rellenarlo con numeros que digite el usuario, luego utilizar realloc para ampliar ese arreglo a 10 numeros y agregar 5 numeros mas, por ultimo imprimir el arreglo resultante de 10 numeros*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int i,num,*p_numeros,*p_numerosCompleto;

    p_numeros=malloc(5*sizeof(int));
    for(i=0;i<5;i++){
	printf("Ingrese numero: ");
	scanf("%i",&num);
	p_numeros[i]=num;
    }
    printf("El vector ingresado es: ");
    for(i=0;i<5;i++){
	printf("%i ",p_numeros[i]);
    }
    printf("\n");
    //Ampliando el vector de numeros
    
    p_numerosCompleto=realloc(p_numeros,10*sizeof(int));

    for(i=5;i<10;i++){
	printf("Ingrese nuevo numero: ");
	scanf("%i",&num);
	p_numerosCompleto[i]=num;
    }

    printf("Ahora el nuevo array:\n");

    for(i=0;i<10;i++){
	printf("%i ",p_numerosCompleto[i]);
    }
    printf("\n");
    free(p_numerosCompleto);
    return 0;
}
