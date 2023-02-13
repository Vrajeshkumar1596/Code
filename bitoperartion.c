#include <stdio.h>

int main (void)
{ int zahl;
  printf ("Bit 8 loeschen und Bits 0..3 setzen\n");
  while (1)
  	{ printf ("\nZahl eingeben:");
		  scanf ("%i",&zahl);
		  zahl = ((zahl & 0xFFFFFEFF)|0xF);
		  printf ("Die neue Zahl ist %i\n",zahl);
		}
