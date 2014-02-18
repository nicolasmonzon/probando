#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	int i;
	FILE *pf;
   char c[5];

pf=fopen("C:\\escritorio\\archivo.txt","wt");
if(!pf)
	exit(1);
for(i=0;i<10;i++)
   {printf("Ingrese cadena: ");
   fflush(stdin);
   gets(c);
	fputs(c,pf);
   putc('\n',pf);
   }
fclose(pf);
pf=fopen("C:\\escritorio\\archivo.txt","rt");
if(!pf)
	exit(1);
for(i=0;i<10;i++)
  	{fgets(c,5,pf);
   printf("\nCadena: %s", c);
   }
getch();
}
