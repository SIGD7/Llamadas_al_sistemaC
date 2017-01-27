/*Sergio Iván Galindo Díaz
Práctica #4

Programa que convierte en hexadecimal un caracter ingresado por el usuario
*/


#include<stdio.h> //header(preprocesador)

int main() //funcion main()
{
	char letra;
	printf("Introduce una letra:  ");
	scanf("%c",&letra);
	printf("El hexadecimal de la letra  %c es --> %x\n",letra,letra);//%c->caracter ,%x->hexadecimal
		
	return 7;
}

