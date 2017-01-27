/*Sergio Iván Galindo Díaz
Práctica #5

Programa que realiza el facorial de un número
*/



#include<stdio.h>

//funcion factorial

int factorial(int); //prototipo de la  función  factorial

//funcion main

int main()

{

  	int x=0;

  	printf("Introduce un numero para obtener su factorial: ");

 	scanf("%d",&x); 

	//Imprime el resultado y manda llamar a la funcion factorial

  	printf("El factorial de %d es: %d\n",x, factorial(x));

  	return 0;

}


int factorial(int x)

{

        if(x<2)

                return 1;

        else

                return x * factorial(x-1);

}

