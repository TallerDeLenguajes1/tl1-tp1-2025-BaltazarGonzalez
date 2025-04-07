
#include <stdio.h>
int Cuadrado (int a);
int main() {
    int num,result;
    puts("un numero entero");
    scanf("%d",&num);
    
    result = Cuadrado(num);
    printf("su numero: %d   al cuadrado:%d",num,result);
    

    return 0;
}
int Cuadrado (int a){
    return(a*a);
}