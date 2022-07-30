#include <stdio.h>


int main()
{
      int decimale=0;
	printf( "inserisci il decimale da convertire: ");
	scanf( "%d",&decimale);
	printf( "00000000");
	//printf("%d",decimale);
	while (decimale>0)
	{
		//printf( "i: %d\n",i);
		//printf(" %d\n",(decimale%2)*potenza(10,i));
		//printf("Bianrio: %lld\n",binario);
		//binario=binario+(decimale%2)*pow(10,i);
		printf("\b%d\b",decimale%2);
		decimale=decimale/2;
		//printf("Decimale: %lld\n",decimale);
	}
	return 0;
}