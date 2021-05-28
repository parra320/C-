#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float a[10][10]={0}, fila[10], piv=0.000;
int i,j,k,l,o,p,indice=0,indicenew=0,columna=0,renglones=0, e=0;
int m, n;
char s;
int main(){
    while(true){
        printf("Eliminación de Gauss-Jordan\nIngresa el numero de filas: ");
        scanf("%d", &m);  //Filas
        printf("Ingresa el numero de columnas: ");
        scanf("%d", &n);  //columnas
        for (i = 0; i < m; i++){
            for (j = 0; j < m; j++){
                printf("Ingresa el valor de la Fila %d, Columna %d: ", i+1,j+1);
                scanf("%f", &a[i][j]);
            }
            printf("\n");
        }
        printf("\tMatriz Original\n\n");
        for (i = 0; i < m; i++){
            for (j = 0; j < m; j++){
                printf("  %.1f", a[i][j]);
            }
            printf("\n");
        }
        for (i = 0; i < n; i++){
            for (j = indicenew; j < m; j++){
                if(fabs (a[i][j])>0){
                    indice=j;
                    for (k = 0; k < n; k++){
                        fila[k]=(a[indicenew][k]);
                        a[indicenew][k]=(a[indice][k]);
                        a[indice][k]=fila[k];
                    }
                indicenew++;
                }
            }
        }
        //Metodo de Gauss
        for (i = 0; i < n; i++){
            if(a[renglones][i]<-0.000001 || a[renglones][i]>0.000001){
                piv=a[renglones][i];
                for (j = 0; j < n; j++){
                    a[renglones][j]=a[renglones][j]/piv;
                }
            }
            for (j = 0; j < n; j++){
                if(j!=renglones){
                    piv=a[j][i];
                    for (k = 0; k < n; k++){
                        a[j][k]=a[j][k]-(a[renglones][k]*piv);
                    }
                }
            }
        }
        renglones++;
        indicenew=0;
        for (l = 0; l < n; l++){
            for (o = indicenew; o < e; o++){
                if(fabs (a[o][l])>0.0000){
                    indice=0;
                    for (p = 0; p < n; p++){
                        fila[p]=(a[indicenew][p]);
                        a[indicenew][p]=(a[indice][p]);
                        a[indice][p]=fila[p];
                    }
                    indicenew++;
                }
            }
        }
        printf("\nMatriz Resultante\n\n");
        for (i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                printf("  %.2f", a[i][j]);
            }
            printf("\n");
        }
        printf("¿Deseas realizar otra matriz? S/N\n");
        scanf("%c", &s);
        renglones=0;
        if(s=='n'){
            return 0;
        }
        for (i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                a[i][j]=0;
            }
        }
    }
}
