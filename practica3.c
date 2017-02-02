#include <stdio.h>
#include <limits.h>

void main()
{

	int dias = 0, i = 0;

	dias = LONG_MAX / 86400; //convertir a dias 
	printf("Dias a partir del 1 de Enero de 1970: %i\n", dias);
	printf("Calculando....\n");
	//Ciclo que terminara cuando se acaben los diasc
	for (i = 1970 ; ; i++)
	{
		(i%4) ? (dias -=366) : (dias -=365);

		if (dias <= 0)
		{
			//Obtenemos el valor absoluto de los dias, por si se resto y quedo negativo
			dias *=-1;
			//Como hay dias de sobra, se aumenta un año
			i++;
			break;
		}
	}
	printf("\nFin del mundo %d con %d dias\n",i, dias);
	
}