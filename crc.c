#include <stdio.h>
#include <string.h>
/*CRC NON FUNZIONANTE*/
/*Confrontare con  https://www.fermimn.edu.it/linux/terza/crc.htm*/
/*Probabilmente incide anche la dimensione della memoria usata per immagazzinare i dati (int, long int,....)*/
int main()

{
	//
	//int a=0x61;
	int a=0xa3;
	printf("%p\n",a);
	int b=0xac;
	printf("%p\n",b);
	int ab=(a<<8) | b; 
	printf("%p\n",ab);
	int crc_pol_5=0x1a; // 
	int resto=(ab^crc_pol_5);
	int tmp=crc_pol_5;
	int count=0;
	while (tmp!=0)
	{
		tmp=tmp/2;
		//printf("tmp %d\n",tmp);
		count++;
	}
	printf("contatore %d\n",count);
	int sent_msg=ab<<(count)| (resto); // Concatenazione tra byte fatta con il singolo '|'
	printf("RESTO: %p\n",resto);
	printf("%p\n",crc_pol_5);
	printf("MESSAGGIO INVIATO: %p\n",sent_msg);
	int decode_ok=(sent_msg^crc_pol_5);
	printf("%p\n",decode_ok);
	if (decode_ok==0)
		{
			printf("No errori");
		}
	else
		{
			printf("errori");
		}
	return 0;
}