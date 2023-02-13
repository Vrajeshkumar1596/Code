#include <stdio.h>
//--------------------- Unterprogramm ---------------------
int primtest (int a)
{int prim = 1, teiler;
 for (teiler = 2 ; teiler < ((a/2)+1) ; teiler++)
	{ if ((a%teiler)==0)
		{ prim = 0;
		  break;
		}
	}
 return (prim);
}
//--------------------- Hauptprogramm ---------------------
int main (void)
{int ergebnis, Zahl = 1;
 printf ("Primzahlen:\n");
 while (1)
	  {	ergebnis = primtest(Zahl);
		if (ergebnis){
                printf (" %i",	Zahl);
		    }
		else
			{printf (" -");
		    }
		Zahl++;
	  }
 return (0);
}

