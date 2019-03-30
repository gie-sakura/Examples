/*Pedir al usuario el numero de elementos para un array de numeros enteros,posteriormente comprobar con malloc si hay memoria suficiente, si la hay entonces rellenar ese array con numeros aleatorios, si no la hay decir que hay un error en la asignacion de memoria.*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int i,num,*p_array;
    printf("Ingrese numero de elementos: ");
    scanf("%i",&num);
    p_array=malloc(num*sizeof(int));

    if(p_array == NULL){
	printf("Error en la asignacion de memoria.\n");
	return -1; //Intentar recuperar memoria
    }else{
	for(i=0;i<=num;i++){
	    p_array[i]= 1+rand()%((num-1)-1);
	    printf("%i.\n",p_array[i]);
	}
    }
    
    return 0;
}
