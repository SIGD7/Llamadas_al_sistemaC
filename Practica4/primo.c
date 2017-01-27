/*Sergio Iván Galindo Díaz
Práctica #4

Programa que imprime los numeros primos desde 2 hasta x,x es dado por el usuario
*/


#include<stdio.h> //header(preprocesador)
#define true 1
#define false 0
typedef char bool;

bool primo(int n);//prototipo función primo()
int main() //funcion main()
{
	int x;
	int i=0;
	printf("Programa que imprime numeros primos \n\n");
	printf("Introduce hasta que numero va a hacer la validación:  ");
	scanf("%d",&x);
	while(i <= x)//rango en que se van a generar los números primos
	{
        if(primo(i))
		printf("--> %d\n",i);
		i++;
	}
return 0;
}

bool primo(int n)
{
	int j;
	if(n == 2) // el 2 es el único número par que también es primo
	return true;
	if(n%2 == 0 || n == 1) //por definición el 1 no es número primo ni los pares
	return false;
	for(j=2; j<=n/2; j++) //si el numero puede dividirse en más de 2 ocaiones, ya no es primo.
	{
		if(n%j == 0)
		return false;
	}
	
	return true; //Son primos
}
