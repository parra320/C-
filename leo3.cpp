#include <iostream>

using namespace std;

int main(void){
    
    int n;
    int sueldo[n], edad[n];
    char clave[n], categoria[n], genero[n];
    printf("Ingrese el numero de Trabajadores: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        printf("Ingrese su Clave: ");
        scanf("%d", &clave[n]);
        printf("Ingrese su Categoria: ");
        scanf("%d", &categoria[n]);
        printf("Ingrese su Sueldo: ");
        scanf("%d", &sueldo[n]);
        printf("Ingrese sus Años de Antigüedad (Solamente el Numero): ");
        scanf("%d", &edad[n]);
        printf("Ingrese su Género: ");
        scanf("%d", &genero[n]);
    }
    printf("%d", sueldo[1]);


}