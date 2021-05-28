#include <stdio.h>

int arr1[3][4][5][2], arr2[5][3][4][5][2],var,i,j,k,h,l;
int *point;

void modify (int *);

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

    modify(point);

    printf("\n\nPlano 0 --> Multiplos de 5\n");
    printf("Plano 1 --> Multiplos de 6\n");
    printf("Plano 2 --> Multiplos de 7\n");
    printf("Plano 3 --> Multilpos de 3\n\n");

    for (h=0; h<3; h++){
        for (i=0; i<4; i++){
            for (j=0; j<5; j++){
                for(k=0;k<2;k++){
                    printf("arr1[ %i ][ %i ] [ %i ] [ %i ] = %i\n",h,i,j,k,arr1[h][i][j][k]);
                }
            }
        }
    }
}

void modify (int *point){
    int  i,n=1,m=1,l=1,o=1;
    for (i=0;i<120;i++){// Un único ciclo for para calcular los multiplos dependiendo el plano
        if ( (i<10) || (40<=i && i<50) || (80<=i && i<90) ){//multiplos de 5
            *(point+i)=5*n;
            n++;
        }else if ( (20<=i && i<30) || (60<=i && i<70) || (100<=i && i<110) ){//multiplos de 7
            *(point+i)=7*l;
            l++;
        }else if ( (10<=i && i<20) || (50<=i && i<60) || (90<=i && i<100)  ){//multiplos de 6
            *(point+i)=6*m;
            m++;
        }else if ( (30<=i && i<40) || (70<=i && i<80) || (110<=i && i<120) ){//multiplos de 7
            *(point+i)=3*o;
            o++;
        }
    }
}