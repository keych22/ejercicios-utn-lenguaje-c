/*
 ============================================================================
 Name        : ejercicio1-3.c
 Author      : Keyber Chica Hung
 Version     :
 Copyright   : Your copyright notice
 Description : Ingresar 3 números y mostrar el número del medio, sólo si existe.
 	 	 	   En caso de que no exista también informarlo.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int numeroUno;
	int numeroDos;
	int numeroTres;

	printf("Ingresar un primer numero: ");
	scanf("%d",&numeroUno);
	printf("Ingresar un segundo numero: ");
	scanf("%d",&numeroDos);
	printf("Ingresar un tercer numero: ");
	scanf("%d",&numeroTres);
	if (numeroUno == numeroDos || numeroUno == numeroTres || numeroDos == numeroTres)
	{
		printf("No hay numero del medio");
	}
	else
		{
			if(numeroUno < numeroDos && numeroDos < numeroTres)
			{
				printf("El %d es el numero del medio",numeroDos);
			}
			else
			{
			    if(numeroDos < numeroUno && numeroUno < numeroTres)
			    {
			        printf("El %d es el numero del medio",numeroUno);
			    }
			    else
			    {
			        if(numeroUno > numeroDos && numeroUno > numeroTres && numeroDos > numeroTres)
			        {
			            printf("El %d es el numero del medio",numeroDos);
			        }
			        else
			        {
			            if(numeroUno < numeroDos && numeroUno < numeroTres && numeroDos >numeroTres)
			            printf("El %d es el numero del medio",numeroTres);
			        }
			    }
			}


		}
	return EXIT_SUCCESS;
}

