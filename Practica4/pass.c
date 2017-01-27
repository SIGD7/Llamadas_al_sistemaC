/*Sergio Iván Galindo Díaz
Práctica #4

Programa que valida una contraseña 
*/


#include<stdio.h> //header(preprocesador)
#include<string.h>
int main() //funcion main()
{
	char password[10];

	printf("Introduce un texto:  ");
	scanf("%s",&password);

        if(strcmp(password,"hola123,") == 0)//Compara la cadena con la contraseña
		printf("OK!\n");
	else
		printf("GTFOH!\n");

	return 7;
}
