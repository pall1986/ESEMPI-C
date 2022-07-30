#include <stdio.h>
int main()
{
	int arr[]={0x64, 0xAB0, 0xA0A0, 0xFAFA, 0x100};
	int i;
	
	printf("Array elements are\n");
	for(i=0;i<5;i++)
		printf("Decimal: %d, Hex: %X\n",arr[i],arr[i]);
	
	return 0;
}