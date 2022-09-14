/*
 ============================================================================
 Name        : ejercicio1-2.c
 Author      : Keyber Chica Hung
 Version     :
 Copyright   : Your copyright notice
 Description : Ingresar 3 números y mostrar cuál de los tres es el mayor.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout , NULL);
	int numeroIngresado;
	int maximo;
	int i;


	for (i=0; i<3 ;i++)
	{
		printf("Ingrese un numero: ");
		scanf("%d", &numeroIngresado);
		if(i==0)
		{
			maximo = numeroIngresado;
		}
		else
		{
			if(numeroIngresado > maximo)
			{
				maximo = numeroIngresado;
			}
		}

	}
	printf("El mayor numero ingresado es el %d", maximo);

	return EXIT_SUCCESS;
}
