/*Sergio Iván Galindo Díaz

Practica #1

Límites mínimos y máximos para los tipos de datos

Nota:La ruta de apoyo es /usr/include/limits.h

*/

#include<stdio.h> //header(preprocesador)
#include<limits.h>

int main() //funcion main()
{
printf("\nNumero de bits en un char: %d\n",CHAR_BIT);
printf("Caracter con signo (max %d),(min %d)\n",SCHAR_MAX,SCHAR_MIN); 
printf("Caracter sin signo (max %d)\n",UCHAR_MAX); 
printf("Entero corto con signo (max %d),(min %d)\n",SHRT_MAX,SHRT_MIN);
printf("Entero corto sin signo (maximo %d)\n",USHRT_MAX);
printf("Enteros con signo (max %d),(min %d)\n",INT_MAX,INT_MIN);
printf("Entero sin signo (max %u)\n",UINT_MAX);
printf("Entero largo con signo (max %ld),(min %ld)\n",LONG_MAX,LONG_MIN);
printf("Entero largo sin signo (max %lu)\n",ULONG_MAX);
printf("Entero largo largo con signo (max %lld),(min %lld)\n",LLONG_MAX,LLONG_MIN);
printf("Entero largo largo sin signo (max %llu)\n",ULLONG_MAX);

return 7;
}
