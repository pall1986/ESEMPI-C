#include <stdio.h>
#include <string.h>



unsigned char calc_CRC(unsigned char *vett,int vettlen)
{
	unsigned char crc='\0';
	//printf(vettlen);
	//printf(vett);
	int i;
	for (i=0; i< vettlen;i++){

		crc^=vett[i];
		//printf(vett[i]);
		//printf(crc);

	}
	return crc;


}

int main() {
   // printf() displays the string inside quotation
	unsigned char x[]="ID:04-91-62-98-0-62-98-07-6B`";
	//printf("%s",x);
	//printf("\n%d",int(strlen(x)));

	unsigned char z=calc_CRC(x, (int)strlen(x));



   printf("%c",z);
   printf("\n%d",z);
   printf("\n0x%x",z);
   return 0;
}

