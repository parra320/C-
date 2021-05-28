#include <stdio.h>
#include <math.h>

int main(void){
    int n;
    float funcion=0.0;
    printf("Ingrese el valor de x: ");
    scanf("%d", &n);
    if(n<=0){
        funcion=pow(n,5)-3;
        printf("El valor es: %.f\n", funcion);
    }
    if(n>0 && n<=10){
        funcion=pow(n,2)+4;
        printf("El valor es: %.f\n", funcion);
    }
    if(n>10){
        funcion=n+5;
        printf("El valor es: %.f\n", funcion);
    }
    return 0;
}