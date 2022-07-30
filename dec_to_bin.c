#include <stdio.h>

signed long long  int potenza( int base,int esponente)
{

	signed long long  int potenza=1;
	if (esponente==0)
		{
			return 1;
		}
	else if (esponente==1)
		{
			return base;
		}
	else 
	{
		for (int t=1; t<=esponente; t++)
		{
			potenza=potenza*base;
			//printf("Potenza %lld\n",potenza);
		}
		return potenza;
	}
}
int main()
{
     signed long long int decimale=0;
	signed long long int binario=0;
	int i=0;
	printf( "inserisci il decimale da convertire: ");
	scanf( "%lld",&decimale);
	//printf("%d",decimale);
	while (decimale!=0)
	{
		//printf( "i: %d\n",i);
		binario=binario+(decimale%2)*potenza(10,i);
		//printf(" %d\n",(decimale%2)*potenza(10,i));
		//printf("Bianrio: %lld\n",binario);
		//binario=binario+(decimale%2)*pow(10,i);
		i=i+1;
		decimale=decimale/2;
		//printf("Decimale: %lld\n",decimale);
	}
	
	printf("%lld\n",binario);

	return 0;
}