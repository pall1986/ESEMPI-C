#include <stdio.h>
int main()
{
	int num1=0xBA;
	int num2=0xCE;
	int or=num1 | num2;// NUM1 OR NUM2
	int sum=num1 + num2;// NUM1 + NUM2
	int xor=num1 ^ num2;// NUM1 XOR NUM2
	int and=num1 & num2;//NUM1 AND NUM2
	int compl=~num1;// COMPLEMENTO A 1 (premere ALT+5  (option+5 su MAC) per scrivere il carattere '~'')
	printf("Num1: %d, Hex: %X\n",num1,num1);
	printf("Num2: %d, Hex: %X\n",num2,num2);
	printf("OR: %d, Hex: %X\n",or,or);
	printf("Somma: %d, Hex: %X\n",sum,sum);
	printf("XOR: %d, Hex: %X\n",xor,xor);
	printf("AND: %d, Hex: %X\n",and,and);
	printf("Comlemento a 1: %d, Hex: %X\n",(unsigned char)compl,(unsigned char)compl);
	
	return 0;
}