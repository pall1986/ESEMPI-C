	#include <stdio.h>

	int *somma(int *a, int *b) //ritorna puntatore ad intero
	{
		
		return *a+*b;
	}
	 void stampa(int *somma)
	 {

	 printf("La somma è:%d\n", *somma);

	 }

	 int main()
	 {

	int num1=22;
	int num2=23;
	int *sum=somma(&num1,&num2);// dichiaro una variabile puntatore ad intero a cui viene assegnato il valore della funzione
	
	stampa(&sum);
 num1=25;
 sum=somma(&num1,&num2);
	}