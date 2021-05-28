#include<stdio.h>
int main(){
	int arr[9],resultado,resto=0,i=0,binario,op,n;
    printf("introduce el numero binario de Maximo 9 Digitos: ");
    scanf("%i", &binario);
	printf("Ingresa la opcion que quieres ejecutar\n");
	printf("1. Binario puro\n");
	printf("2. Punto fijo\n");
	printf("3. Complemento A 2\n");
    printf("4. Salir\n");
	scanf("%i",&op);
	switch(op){
		case 1:
			for(i=0;i<9;i++){
				arr[i]=binario%10;
				binario/=10;
			}
			for(i=8;i>=0;i--){
				resultado=(resto*2)+arr[i];
				resto=resultado;		
			}
			printf("El valor en decimal es: %i",resultado);
		break;
		case 2:
			printf("introduce el numero binario: ");
	        scanf("%i",&binario);
			for(i=0;i<6;i++){
				arr[i]=binario%10;
				binario/=10;
			}
			for(i=5;i>=0;i--){
				resultado=(resto*2)+arr[i];
				resto=resultado;		
			}
			
			printf("El valor en decimal es: %i",resultado);
		break;
		case 3:
			for(i=0;i<9;i++){
				arr[i]=binario%10;
				binario/=10;
			}
			for(i=8;i>=0;i--){
				resultado=(resto*2)+arr[i];
				resto=resultado;		
			}
			
			printf("El valor en decimal es: %i",resultado);
		break;
	}

return 0;
}