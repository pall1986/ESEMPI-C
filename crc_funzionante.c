// Tizio - Pinco - 3AIN - 12/04/2002
// Programma che calcola il CRC di una sequenza di caratteri
// immessi da tastiera, terminati con EOF

#include <stdio.h>

#define PG 0x11011	/* Polinomio generatre */

int crc(int oldcrc, unsigned char toadd);	/* Aggiunge toadd al CRC calcolato */

main()
{
int resto=0;	// CRC
int c;		// Carattere letto
int i = 0;	// Contatore dei caratteri

  //printf("Inserisci una sequenza di caratteri: ");
  //while((c=getchar())!=EOF)
  c=0xFF;
    printf("Sono qua");
    resto=crc(resto,c);		// Agginge il carattere letto al CRC dei precedenti
    i++;			// Conta i caratteri letti
  
  resto=crc(resto,0);		// Agginge al CRC i primi otto zeri
  resto=crc(resto,0);		// Agginge al CRC i secondi otto zeri in fondo

  printf("\nLetti %d caratteri, CRC calcolato: %p\n", i, resto);     
}

/* Aggiunge i bit del codice oldcrc al dividendo, per
 * calcolare il nuovo CRC
 */		
int crc(int oldcrc, unsigned char toadd)
{
int i;	// Indice del bit

  // I bit del carattere vanno trattati dal piu' significativo al meno
  for(i=0;i<8;i++)	// Per ogni bit del byte
  {
    oldcrc= (oldcrc<<1) | (toadd>>7);	// Aggiunge il bit piu' significativo
					// del codice in fondo al CRC,
					// spostando a sinistra i bit del CRC
    toadd <<= 1;			// Toglie il bit gestito dal codice
    if((oldcrc & 0x10000) != 0)		// Se il divisore ci sta' (alla sua maniera)
    {
      oldcrc=oldcrc^PG;			// Allora lo toglie (sottrazione senza riporti,
					// quindi XOR
    }
  }
  return oldcrc;			// Restituisce il CRC ricalcolato
}