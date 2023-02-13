#include <stdio.h>

int main (void)
{
	int zahl;
    unsigned int maske;
  while (1)
  	{ 
		printf ("\nZahl eingeben:");
        scanf ("%i",&zahl);
	  maske = 0x80000000;

	  for (int i = 1; i <= 32; i++)
		  {
			if (zahl & maske)
			  {
				printf("1");
		      }
		   else
			  {printf("0");
		      }
		   if ((i%4)==0) printf (" ");
		   maske = maske >> 1;
          }
	  printf ("\n");
    }
}
