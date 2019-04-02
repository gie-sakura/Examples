/*Pedir 2 nombres al usuario y comparar si son iguales o no*/

#include<stdio.h>
#include<string.h>

int main(){
    
    char nom1[50],nom2[50];

    printf("Digite nombre 1: ");
    scanf("%s",nom1);
    printf("Digite nombre 2: ");
    scanf("%s",nom2);
    if(strcmp(nom1,nom2)==0){
	printf("\nLos nombres son iguales\n");
    }else{
	printf("\nLos nombres son diferentes\n");
    }

    return 0;
}
