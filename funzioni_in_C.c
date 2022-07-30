#include <stdio.h>
int somma (int a, int b)
{
	return a+b;
}

void stampa(int somma)
{
	printf("La somma è:%d\n", somma);
}
int main()
{
	int num1=0xBA;
	int num2=0xCE;
	int sum=somma(num1,num2);
	stampa(sum);
	return 0;

}