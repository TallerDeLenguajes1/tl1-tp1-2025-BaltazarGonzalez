#include <stdio.h>
int Cuadrado (int a);
void Cuadrau (int a);
void variable(int a);
void invertir(int *a,int *b);
void orden (int *a,int *b);

int main() {
    int num,num1,num2;
    puts("un numero entero");
    scanf("%d",&num2);
    Cuadrau(num2);
    variable(num2);
    puts("dos numeros enteros");
    scanf("%d %d",&num,&num1);
    
    
    invertir(&num,&num1);
    orden (&num,&num1);
    return 0;
}

int Cuadrado (int a){
    return(a*a);
}
void Cuadrau (int a){
    printf("\nCuadrado del numero:%d es %d\n",a,a*a);
}
void variable(int a){
    printf("\ndireccion de memoria: %p y contenido: %d\n",&a,a);
}
void invertir(int *a,int *b){
   int c;
   printf("\nnum1:%d num2:%d\n",*a,*b);
   c = *a;
   *a = (*b);
   *b = c;
   printf("nuevos num1:%d num2:%d",*a,*b);
}
void orden(int *a,int *b){
    int c;
    if(*a != *b){
        if(*a > *b){
          c=*a;
          *a = *b;
          *b =c;
        }
    }
    printf("\nmenor: %d mayor: %d\n",*a,*b);
}