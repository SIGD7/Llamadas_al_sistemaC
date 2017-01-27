/*Sergio Iván Galindo Díaz
Práctica #4
Programa que imprime números apartir del 0 hasta x, x es dado por el usuario.
*/
#include<stdio.h> //header(preprocesador)
//variables globales
int i= 0;
int x;
int main() //funcion main()
{
	printf("¿Cuantos numeros deseas imprimir? ");
	scanf("%d",&x);
	for(i=0; i<=x; i++)
	{
	printf("--> %d\n",i); 
	}
return 0;
}
