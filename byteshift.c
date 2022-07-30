#include <stdio>
int main()
{
	int hex=0x64;
	printf("Decimal: %d, Hex: %X\n",hex,hex);
	hex=hex<<1;//shift a sinistra di una posizione (moltiplico per 2)
	printf("Decimal: %d, Hex: %X\n",hex,hex);
	hex=hex<<2;//shift a sinistra di due posizioni (moltiplico per 4)
	printf("Decimal: %d, Hex: %X\n",hex,hex);
	hex=hex>>3;//shift a destra di tre posizioni (divido per 8)
	printf("Decimal: %d, Hex: %X\n",hex,hex);
	hex=0x64;
	hex=hex<<8;//shift a sinistra di 8 posizioni (moltiplico per 256)
	printf("Decimal: %d, Hex: %X\n",hex,hex);
	hex=0x64;
	hex=hex<<16;//shift a sinistra di 16 posizioni (moltiplico per 65536)
	printf("Decimal: %d, Hex: %X\n",hex,hex);

	return 0;
}