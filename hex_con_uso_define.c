#include <stdio.h>
#define HEX_1 0x64 // ogni volta nel codice è richiamata la stringa HEX_1, il programma gli associa automaticamente il valore di questa variabile
#define HEX_2 0xAB0 // ogni volta nel codice è richiamata la stringa HEX_2, il programma gli associa automaticamente il valore di questa variabile
#define STRINGA_1 "Questa è una stringa presa con define\n" // ogni volta nel codice è richiamata la strina HEX_2, il programma gli associa automaticamente la stringa di destra
#if defined(STRINGA_1) //è definita la STRINGA_1 ?
	#define STRINGA_2 "Poiche esiste STRINGA_1, questa  è una  seconda stringa presa con define\n" // se è vero: ogni volta nel codice è richiamata la stringa STRINGA_2, il programma gli associa automaticamente la stringa di destra
	#include <string.h> //posso inserire un include all'interno di un if defined o di un else o di un elseif
#else
	#define STRINGA_3 "Poiche non esiste STRINGA_1, questa  è una  terza stringa presa con define\n" // se è falso: ogni volta nel codice è richiamata la stringa STRINGA_3, il programma gli associa automaticamente la stringa di destra
#endif //fine if defined
#define PI 3.1415
#define area(r) (PI*r*r) //definizione di una macro 

int main()
{
	int arr[]={HEX_1, HEX_2, 0xA0A0, 0xFAFA, 0x100};
	int i;
	printf("HEX_1: %X\n",HEX_1);
	//Le direttive di preprocessore possono essere usate anche durante il programma
	#if defined (STRINGA_1)
		printf(STRINGA_1);
	#else 
		printf(STRINGA_3);
	#endif//fine if defined
	printf("Array elements are\n");
	for(i=0;i<5;i++)
		printf("Decimal: %d, Hex: %X\n",arr[i],arr[i]);
	#undef STRINGA_1 // cancella STRINGA_1
	printf("Area del cerchio di raggio 2:\n%f\n", area(2));
	return 0;
}