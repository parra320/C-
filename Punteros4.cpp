#include<stdio.h>

int main(){
    int arr[5][4];
    int i, j, a;
    printf("Ingrese los valores para el arreglo:\n");
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            printf("Valor [%d][%d]: ", i+1,j+1);
            scanf("%d", &a);
            arr[i][j]=a;
        }
    }
    for(i=0;i<5;i++){
        printf("%d.- %d\t ,%d\t ,%d\t ,%d\n", i+1, arr[i][0], arr[i][1], 
        arr[i][2], arr[i][3]);
    }
    printf("\n");
    for(i=0;i<5;i++){
        if(i%2==0){
            for(j=0;j<4;j++){
                arr[i][j]=arr[i][j]*2;
            }
        }else{
            for(j=0;j<4;j++){
                arr[i][j]=arr[i][j]*3;
            }
        }
    }
    for(i=0;i<5;i++){
        printf("%d.- %d\t ,%d\t ,%d\t ,%d\n", i+1, arr[i][0], arr[i][1], 
        arr[i][2], arr[i][3]);
    }
}