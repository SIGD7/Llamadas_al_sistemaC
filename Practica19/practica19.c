/*Sergio Iván Galindo Díaz
Práctica # 19

Leer el tamaño de bits, bytes y kilobytes de un archivo
*/

//headers
#include <fcntl.h>      /* Modos de apertura */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>     /* Funciones de ficheros */

int main ( int argc, char* argv[] )
{
   char cadena[11];
   float leidos;


   int fichero = open ("info.txt", O_RDONLY);

   /* Comprobación */   
   if (fichero==-1)
   {
        perror("Error al abrir fichero:");
        exit(1);
   }

   /* Coloca el puntero en la posición 400 */
   lseek(fichero,00,SEEK_SET);

   /* Lee diez bytes */
   leidos = read(fichero, cadena, 10);
   close(fichero);
   cadena[10]=0;

   /* Salida para leer los bits,bytes y kilobytes */
   printf ( "Se procesaron--> %.4f bytes.\n", 			  leidos);
   printf("Se procesaron--> %.4f bits.\n",			(leidos*8));
   printf("Se procesaron--> %.4f kilobits.\n",			(leidos/1024));

   return 0;
}
