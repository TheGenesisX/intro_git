#include <stdio.h>

int main(){
    char nombre[100];
    unsigned int edad;

    printf("Hello World!\n");
    printf("Ingresa tu nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Hola %s", nombre);
    printf("Ingresa tu edad: ");
    scanf("%u", &edad);
    printf("Vas a cumplir: %u\n", edad + 1);

return 0;
}