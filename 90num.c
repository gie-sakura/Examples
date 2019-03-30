/*Hacer un puntero array de tipo float, pedir al usuario el número de elementos, luego reservar memoria dinamica con calloc, luego llenarl el array, imprimir todos los elementos, y por ultimo liberar el espacio de memoria dinamica utilizado*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    float *p_arrnum,numf;
    int i,num;
    
    printf("Digite numero de elementos: ");
    scanf("%i",&num);
    p_arrnum=calloc(num,sizeof(float));
    for(i=0;i<num;i++){
	printf("posicion %i: ",i+1);
	scanf("%f",&numf);
	p_arrnum[i]=numf;
    }
    printf("\nEl array es: ");
    for(i=0;i<num;i++){
	printf("%.2f ",p_arrnum[i]);
    }
    printf("\n");
    free(p_arrnum);

    return 0;
}
