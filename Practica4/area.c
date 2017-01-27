/*Sergio Iván Galindo Díaz
Práctica #4

Programa que calcula las areas del triángulo,cuadrado y rectángulo
*/


#include<stdio.h>
//Prototipos de funciones
float triangulo(float,float); 
float rectangulo(float,float); 
float cuadrado(float); 

int main()
{
	int opc;
	float a,b;

	// Menú de opciones
	do{
	printf("\t\tPrograma que determina areas\n\n");
	printf("1.- Triangulo\n");
	printf("2.- Rectangulo\n");
	printf("3.- Cuadrado\n");
	printf("4.- Salir\n\n");
	printf("Elige una opcion: ");
	scanf("%d",&opc);

	switch(opc)
	{
		case 1:
			printf("Area del triangulo: \n");
			printf("Introduce la altura: ");
			scanf("%f",&a);
			printf("Introduce la base: ");
                        scanf("%f",&b);
			printf("El area es: %.3f[u²]\n", triangulo(a,b));
			break;
		case 2:
			printf("Area del rectangulo: \n");
                        printf("Introduce la altura: ");
                        scanf("%f",&a);
                        printf("Introduce la base: ");
                        scanf("%f",&b);
                        printf("El area es: %.3f[u²]\n", rectangulo(a,b)); 
			break;
		case 3:
			printf("Area del cuadrado: \n");
                        printf("Introduce el lado: ");
                        scanf("%f",&a);
                        printf("El area es: %.3f[u²]\n", cuadrado(a));
			break;
		case 4:

			break;
 
		default:
			printf("\t\t-->Debes elegir una opción de las anteriores<--\n\n");
			
			break;
	}
	}
	while(opc>4);// se realiza de nuevo todo sino se elige una opción

	
	return 0;
}

float triangulo(float a, float b)
{
	return (a*b)/2; //Área del triángulo
}

float rectangulo(float a, float b)
{
        return a*b; // Área del rectángulo
}


float cuadrado(float a)
{
        return a*a; //Área del cuadrado
}



