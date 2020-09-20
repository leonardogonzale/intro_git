#include <stdio.h>

int main(){
    char nom[100];
    unsigned int edad;


    printf("hola mundo\n");
    printf("ingresa tu nombre");
    fgets(nom, sizeof(nom), stdin);
    printf("hola %s",nom);
    printf("Ingresa tu edad");
    scanf("%u", &edad);
    printf("vas a cumplir %u", edad+1); 

    return 0; 
}
 