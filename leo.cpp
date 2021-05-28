#include <iostream>

int main(void){

    printf("Ingrese un valor entero: ");
    int n;
    int suma=0;
    scanf("%d", &n);
    if(n==0){
        printf("El valor es 0\n");
    }else if(n>0)
    {
        for (int i = 1; i < n+1; i++)
        {
            suma=suma+i;
        }
        printf("El valor de la suma es: %d\n", suma);
    }else if(n<0)
    {
        for (int i = -1; i > n-1; i--)
        {
            suma=suma+i;
        }
        printf("El valor de la suma es: %d\n", suma);
    }
}

