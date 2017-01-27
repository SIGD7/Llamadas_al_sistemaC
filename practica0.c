//Sergio Iván Galindo Díaz
//Práctca #0

/*Dado n=[1,30] imprimir  n línea a línea, intercambiando los múltiplos de 3 
por la palabra Fizz, y los de 5 por Buzz; cuando sea múltiplo de ambos,
debe  imprimirse  FizzBuzz.*/

#include<stdio.h>//header 

//funcion main
int main() {
int i=0;
	for(i=1;i<=30;i++){
		if (i % 3 == 0 && i % 5 == 0)//valida modulos de 3 y 5
			printf("FizzBuzz\n");
		else if (i % 3  == 0)//valida solo el módulo de 3
			printf("Fizz\n");
		else if (i % 5 == 0)
			printf("Buzz\n");//valida solo el módulo de 5
		else 
			printf("%i\n", i);//imprime los demás números
		
	}
return 7;	
}
