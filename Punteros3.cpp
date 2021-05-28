#include<stdio.h>
#include<math.h>

void ope (int *x, int *y);

int main(){
    int a, b;

    printf("Ingrese 2 numeros enteros: \n");
    printf("Valor1: ");
    scanf("%d", &a);
    printf("Valor2: ");
    scanf("%d", &b);

    ope(&a, &b);
    printf("Los resultados son:\n %d\n %d\n", a, b);
    return 0;
}

void ope (int *x, int *y){
    *y=pow(*x, *y);
    *x=(*y)/(*x);
}