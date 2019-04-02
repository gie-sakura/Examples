/*Leer un string con getchar() y contabilizar cuantas veces aparece la vocal a,e,i,o,u, e imprimir el contador de cada una*/

#include<stdio.h>


int main(){
    int c,conta=0,conte=0,conti=0,conto=0,contu=0;

    printf("Escribe una palabra: ");

    while((c=getchar())!=EOF){
	switch(c){
	    case 'a':
		conta++;
		break;
	    case 'e':
		conte++;
		break;
	    case 'i':
		conti++;
		break;
	    case 'o':
		conto++;
		break;
	    case 'u':
		contu++;
		break;
	}
	if(c==10){
	    break;
	}
    }

    printf("\nEl conteo de vocales es:\n");
    printf("Tiene %i a\n",conta);
    printf("Tiene %i e\n",conte);
    printf("Tiene %i i\n",conti);
    printf("Tiene %i o\n",conto);
    printf("Tiene %i u\n",contu);

    return 0;
}
