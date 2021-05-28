#include <stdio.h>
#include <iostream>

int main(){
    int arr[8], opcion, op2, i, j, suma=0, multi=1, suma2=0, op3;
    do{
        printf("Seleccione una de las siguientes opciones:  \n");
        printf("1. Ingresar y modificar los elementos del arreglo \n");
        printf("2. Suma de los elementos del arreglo \n");
        printf("3. Multiplicación de los elementos del arreglo \n");
        printf("4. Suma de los elementos del arreglo divisibles entre 3 \n");
        printf("5. Multiplicación de los elementos del arreglo por 3 \n");
        printf("\t");
        scanf("%i", &opcion);
        switch(opcion){
            case 1:
                printf("Seleccione una de las siguientes opciones:  \n");
                printf("1. Ingresar datos \n");
                printf("2. Modificar datos \n");
                printf("\t");
                scanf("%i", &op2);
                switch(op2){
                    case 1:
                        printf("\n");
                        for (i = 0; i < 8; i++){
                            printf("%i.-", i+1);
                            scanf("%d", &arr[i]);
                        }
                        for (j = 0; j < 8; j++){
                            printf("(%d) ", arr[j]);
                        }
                        printf("\n\n");
                    break;
                    case 2:
                        printf("¿Como quiere modificar los datos?");
                        printf("1. Por posicion (Seleccionando una posicion del arreglo y asignando un nuevo valor)");
                        printf("2. Por valor (Si el arreglo cuenta con un valor repetido se pueden reemplazar todos por otro valor");
                        switch (op3){
                            case 1:
                                printf("\n");

                            break;
                        }
                    break;
                }
            break;
            case 2:
                printf("\n");
                for (i = 0; i < 8; i++){
                    suma=suma+arr[i];
                }
                printf("El Resultado de la suma de los elementos es: %i\n\n", suma);
            break;
            case 3:
                printf("\n");
                for (i = 0; i < 8; i++){
                    multi=multi*arr[i];
                }
                printf("El Resultado de la multiplicación de los elementos es: %i\n\n", multi);
            break;
            case 4:
                printf("\n");
                for (i = 0; i < 8; i++){
                    if(arr[i]%3==0){
                        suma2=suma2+arr[i];
                    }
                }
                printf("El Resultado de la suma de los elementos es: %i\n\n", suma2);
            break;
            case 5:
                printf("\n");
                for (i = 0; i < 8; i++){
                    arr[i]=arr[i]*3;
                }
                printf("El Resultado de la multiplicación de los elementos por 3 es:\n");
                for (i = 0; i < 8; i++){
                    printf("(%d) ", arr[i]);
                }
                printf("\n");
            break;
        }
    }
    while(opcion<6);
    system("pause");
}