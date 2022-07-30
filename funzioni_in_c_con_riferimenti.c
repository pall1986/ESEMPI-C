	#include <stdio.h>

	int somma(int *a, int *b)
	{
		return *a+*b;
	}
	 void stampa(int *sum)
	 {

	 printf("La somma è:%d\n", *sum);

	 }

	 int main()
	 {

	int num1=22;
	int num2=23;
	int sum=somma(&num1,&num2);
	stampa(&sum);
 num1=25;
 sum=somma(&num1,&num2);
	}