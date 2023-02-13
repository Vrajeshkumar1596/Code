#include <stdio.h>

int main(void){

    int zeichen = 0, i, GesamtAnzahl = 0,nichtBuchstaben = 0;
    float AnzahlBuchstaben[26];

 for (i = 0; i < 26; i++)    /* Feld initialisieren */
	 {AnzahlBuchstaben[i] = 0;
	 }

	while ((zeichen = getchar()) != '\n')   /* Eingabe */

	 if ((zeichen>= 'A') && (zeichen <= 'Z'))
		{
		    ++AnzahlBuchstaben[zeichen-'A'];
		    ++GesamtAnzahl;
		}

	 else
		{ if ((zeichen >= 'a') && (zeichen <= 'z'))
		    {++AnzahlBuchstaben[zeichen-'a'];
	    	     ++GesamtAnzahl;
		    }
	       else{
                ++nichtBuchstaben;
		    }
		}

 printf ("Anzahl der gewerteten Buchstaben:   %d\n",
             GesamtAnzahl);
 printf ("Anzahl der anderen Zeichen:         %d\n",
             nichtBuchstaben);

 printf ("Anzahl der jeweilige Buchstaben:  \n");
 for (i = 0; i < 26; i++)
	  printf("%c :     %1.0f\t", i+'a', AnzahlBuchstaben[i]);

 printf ("\n\nDie prozentuale Anzahl der einzelnen \
								Buchstaben :\n\n");
 for (i = 0; i < 26; i++)
		printf("%c :   %.4f\t", i+'a',
				AnzahlBuchstaben[i]/GesamtAnzahl);
}
