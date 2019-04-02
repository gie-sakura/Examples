/*Leer una cadena de caracteres con getchar() y contabilizar cuantos espacios ocupa*/

#include<stdio.h>

int main(){
    int c,esp=0;
   
    while(EOF !=(c=getchar())){
	putchar(c);
	esp++;
	if(c==10){
	    break;
	}
    }
    printf("El numero de espacios es: %i\n",esp-1);

    return 0;
}
