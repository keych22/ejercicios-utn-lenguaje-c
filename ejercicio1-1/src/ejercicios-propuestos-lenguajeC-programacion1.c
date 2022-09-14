/*
 ============================================================================
 Name        : ejercicios-propuestos-lenguajeC-programacion1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Ejercicio 1-1: Ingresar dos números enteros, sumarlos y mostrar el resultado.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout,NULL);

	int numeroUno;
	int numeroDos;
	int suma;
	printf("Ingreso el primer numero:");
	scanf("%d" , &numeroUno);
	printf("Ingreso el segundo numero:");
	scanf("%d" , &numeroDos);
	suma = numeroUno + numeroDos;
	printf("El resultado de la suma es: %d", suma);

	return EXIT_SUCCESS;
}
