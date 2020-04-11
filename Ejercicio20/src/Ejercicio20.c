/*
 ============================================================================
 Name        : Ejercicio20.c
 Author      : Kevin Quevedo
 Version     : 1.0
 Folder		 : TrabajosExtras
 Copyright   : Your copyright notice
 Description : Hacer el programa que imprima todos los números naturales
 	 	 	   que hay desde la unidad hasta un número que introducimos por teclado.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout, NULL);
	int numero;
	int i;

	printf("Ingrese un numero: ");
	fflush(stdin);
	scanf("%d",&numero);

	for(i=1;i<numero;i++){
		printf("%d, ",i);
	}
	return EXIT_SUCCESS;
}
