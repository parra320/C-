#include <stdio.h>
#include <iostream>

int arr1[3][4][5][2], arr2[5][3][4][5][2],var,i,j,k,h,l;
int *point;


int main(){
    int i;
    point = &arr1[3][4][5][2];
    var=1;

    printf ("\n\t**EJERCICIO 2**\n\n");
    for (h=0; h<3; h++){
        for (i=0; i<4; i++){
            for (j=0; j<5; j++){
                for(k=0;k<2;k++){
                    arr1[h][i][j][k]= var;
                    //Instruccion para verificar cuánto vale *(point+3) *(point+12) *(point +27)
                    //printf("arr1[ %i ][ %i ] [ %i ] [ %i ] = %i\n",h,i,j,k,var);
                    var+=2;

                }
            }
        }
    }//1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,
    int a= *(point+3);//7   Indices: arr1[0][0][1][1]
    int b= *(point+12);//25 Indices: arr1[0][1][1][0]
    int c= *(point+27);//55 índices: arr1[0][2][3][1]

    printf("arr1[0][0][1][1] = %i\n",arr1[0][0][1][1]);
    printf("arr1[0][1][1][0] = %i\n",arr1[0][1][1][0]);
    printf("arr1[0][2][3][1] = %i\n\n",arr1[0][2][3][1]);


    //agrega instrucciones para imprimir en pantalla a b y c
    printf("El valor de a es: %d\n",a);
    printf("El valor de b es: %d\n",b);
    printf("El valor de c es: %d\n",c);

    printf("\n\nPlano 0 --> Multiplos de 5\n");
    printf("Plano 1 --> Multiplos de 6\n");
    printf("Plano 2 --> Multiplos de 7\n");
    printf("Plano 3 --> Multilpos de 3\n\n");

    for (h=0; h<3; h++){
        for (i=0; i<4; i++){
            for (j=0; j<5; j++){
                for(k=0;k<2;k++){
                    arr2[0][h][i][j][k]=arr1[h][i][j][k];
                    printf("arr1[ %i ][ %i ][ %i ][ %i ] = %i\n",h+1,i+1,
                    j+1,k+1,arr1[h][i][j][k]);
                }
            }
        }
    }


    for(l=0; l<5; l++){
        for (h=0; h<3; h++){
            for (i=0; i<4; i++){
                for (j=0; j<5; j++){
                    for(k=0;k<2;k++){
                        if(l==1){
                            arr2[1][h][i][j][k]=arr2[0][h][i][j][k]*5;
                        }else if (l==2){
                            arr2[2][h][i][j][k]=arr2[0][h][i][j][k]*6;
                        }else if (l==3){
                            arr2[3][h][i][j][k]=arr2[0][h][i][j][k]*7;
                        }else if (l==4){
                            arr2[4][h][i][j][k]=arr2[0][h][i][j][k]*3;
                        }
                    }
                }
            }
        }
    }


    for (h=0; h<3; h++){
        for (i=0; i<4; i++){
            for (j=0; j<5; j++){
                for(k=0;k<2;k++){
                    printf("arr1[ %i ][ %i ][ %i ][ %i ]= %i, %i, %i, %i, %i\n",h+1,i+1,j+1,k+1,arr2[0][h][i][j][k], arr2[1][h][i][j][k], arr2[2][h][i][j][k], arr2[3][h][i][j][k], 
                    arr2[4][h][i][j][k]);
                }
            }
        }
    }
}

