#include <stdio.h>

int main(){
    char nom[100];


    printf("hola mundo\n");
    printf("ingresa tu nombre");
    fgets(nom, sizeof(nom), stdin);
    printf("hola %s",nom);

    return 0; 
}
 