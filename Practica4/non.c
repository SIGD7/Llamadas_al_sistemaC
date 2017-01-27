/*Sergio Iván Galindo Díaz
Práctica #4

Programa que imprime los numeros nones desde 1 hasta x,x es dado por el usuario
*/
#include<stdio.h> //header(preprocesador)

int i= 0; //variables globales
int x;
int main() //funcion main()
{
	printf("Programa que imprime numeros nones \n\n");
	printf("Introduce hasta que numero va llegar la validacion:  ");
	scanf("%d",&x);
	for(i=0; i<=x; i++)
	{
	if(i%2 != 0)//Valida que no sea un número par
	printf("--> %d\n",i); 
	}
return 7;
}
