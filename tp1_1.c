#include <stdio.h>

int main() {
    
    printf("Hola Mundo");

     int num,*puntero;
    num = 10;
    puntero = &num;
    printf("contenido puntero:%d\n",*puntero);
    printf("direccion memoria almacenada por puntero:%p\n",puntero);
    printf("direccoin memoria de la variable:%p\n",&num);
    printf("direccion de memoria del puntero:%p\n"),&puntero;
    printf("tamaño de memoria usado por la variable:%d bytes",sizeof(num));
    return 0;
}