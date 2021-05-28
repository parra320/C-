#include <iostream>
#include <stdlib.h>
#include <math.h>
#define p printf
#define s scanf

int main(){
    int a, b, n=0,cal=0,r, m=r, c, i, j;
    int alumnos[50];
    p("Ingrese el numero de alumnos: ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf(" Alumno %d: ", i+1);
        int num;
        scanf("%d", &num);
        alumnos[i]=num;
    }
    do{
        p("¿Que desea hacer con la informacion proporcionada?\n");
        p("1.-Calcular la media aritmetica\n");
        p("2.-Calcular la varianza\n");
        p("3.-Calcular la desviacion estandar\n");
        p("4.-Calcular la moda\n");
        p("5.-Calcular el numero de alumnos aprobados y reprobados\n");
        p("6.-Calcular el porcentaje de alumnos aprobados y reprobados\n");
        p("7.-Calcular el numero de alumnos aspirantes a una beca\n");
        p("8.Salir\n\t:");
        s("%d", &a);
        switch (a){
        int aprobados, reprobados;
        float med, varianza, formula, desv;
        case 1:
            for (i = 0; i < n; i++){
            cal=cal+alumnos[i];
            }
            med=(float)cal/(float)n;
            p("\nLa media aritmetica es de: %.2f\n",med);
            break;
        case 2:
            for (i = 0; i < n; i++){
                cal=cal+alumnos[i];
            }
            med=(float)cal/(float)n;
            for(int i=0; i<n; i++){
                formula=formula+pow(((float)alumnos[i]-med),2.0);
            }
            varianza=formula/n;
            p("la varianza es igual a: %.2f\n",varianza);
            break;
        case 3:
            for (i = 0; i < n; i++){
                cal=cal+alumnos[i];
            }
            med=(float)cal/(float)n;
            for(int i=0; i<n; i++){
                formula=formula+pow(((float)alumnos[i]-med),2.0);
            }
            varianza=formula/n;
            desv=sqrt(varianza);
            p("La desviacion Estandar es igual a: %.4f\n", desv);
            break;
        case 4:
            for (i = 0; i < n; i++){
                r=0;
                for (j= 0; j < n; j++){
                    if(alumnos[i]==alumnos[j] && i!=j){
                        r=r+1;
                    }
                }
                if(r>=m){
                    m=r;
                    c=i;
                }
            }
            p("La moda es igual a: %d y se repite %d veces", alumnos[c], m+1);
            break;
        case 5:
            for (int i = 0; i < n; i++){
                if(alumnos[i]>=6){
                    aprobados++;
                }else if(alumnos[i]<=5){
                    reprobados++;
                }
            }
            
            break;
        default:
            break;
        }
    }
    while(a!=8);
    system("pause");
}
