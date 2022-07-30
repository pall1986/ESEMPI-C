#include <stdio.h>
int main()
{
	int num1=0xABABA;
	int num2=0xFF;
	int sum=num1 +num2;//Le operazioni tra numeri in esadecimale sono le stesse dei numeri decimali
	
	int diff=num1-num2;
	printf("Num1: %d, Hex: %X\n",num1,num1);
	printf("Num2: %d, Hex: %X\n",num2,num2);
	printf("Somma: %d, Hex: %X\n",sum,sum);
	printf("Differenza: %d, Hex: %X\n",diff,diff);
	printf("Prodotto: %d, Hex: %X\n",num1*num2,num1*num2);
	printf("Divisione: %d, Hex: %X\n",num1/num2,num1/num2);
	return 0;
}