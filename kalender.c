#include <stdio.h>

// Anzeige eines KalenderBlattes fuer einen Monat
// Beispiel fuer kein Schaltjahr

int Jahr = 2011;
char MonatsName[12][10] = {"Januar","Februar","Maerz",
			"April","Mai","Juni","Juli","August",
			"September","Oktober","November","Dezember"};

unsigned int TabelleAnzahlTage[12] =
			{31,28,31,30,31,30,31,31,30,31,30,31};

// Monatserster Montag = 1, Sonntag = 7
unsigned int MonatsErster[12] =
			{6,2,2,5,3,3,5,1,4,6,2,4};

//---------------------------------------------------------
void Print_Monat ( unsigned char Monat){
    	int WochenTag=1, offset=1, aktuellerTag = 1;
		printf ("\n%s %i\n\n",MonatsName[Monat-1],Jahr);
		printf ("   | Mo Di Mi Do Fr Sa So\n");
		printf ("---+----------------------\n");

		while (aktuellerTag <= TabelleAnzahlTage[Monat-1])
		 {printf ("   | ");

		  for (WochenTag = 1; WochenTag <=7;WochenTag++)
		   {if ((offset >= MonatsErster[Monat-1]) &&(aktuellerTag<=TabelleAnzahlTage[Monat-1]))
			  {printf ("%2i ",aktuellerTag);
			   aktuellerTag++;
			  }
		    else
			  {printf ("   ");
			  }
		    offset++;
		  }
		  printf ("\n");
		 }
}
//---------------------------------------------------------
int main (void)
{  int Monat;
   printf ("\nKalenderBlatt\n");
   do {printf
        ("\n Monat[1..12](Ende mit 0):");
       scanf ("%i",&Monat);
		 if ((Monat>0)&&(Monat<= 12))
			{ Print_Monat((unsigned char)Monat);
			}
		 else
			{break;
			}
	     } while (1);
   printf ("\n...beendet!\n");
   return (0);
}
