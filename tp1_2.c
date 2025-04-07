
#include <stdio.h>
int Cuadrado (int a);
void Cuadrau (int a);

int main() {
    int num,result;
    puts("un numero entero");
    scanf("%d",&num);
    
    result = Cuadrado(num);
    printf("su numero: %d   al cuadrado:%d",num,result);
    Cuadrau (num);

    return 0;
}

int Cuadrado (int a){
    return(a*a);
}
void Cuadrau (int a){
    printf("\nCuadrado del numero:%d\n",a*a);
}