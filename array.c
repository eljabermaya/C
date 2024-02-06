#include <stdio.h>

int
main ()
{
  int i;
  int n;
  printf ("inserisci un num\n");
  scanf ("%d", &n);
  int arrey[n];
  for (i = 0; i < n; i++)
	{
	  printf ("inserisci valore\n");
	  scanf ("%d", &arrey[i]);

	}
  int media=0;
  int piccolo = arrey[0];
  int grande = arrey[0];
  for (i = 0; i < n; i++)
	{
	  if (arrey[i] < piccolo)
		{
		  piccolo = arrey[i];
		}
		if(arrey[i] > grande){
		    
		 grande = arrey[i];
		}
		media=media+arrey[i];
	}
	printf("il num più piccolo è%d\n",piccolo);
		printf("il num più grande è%d\n",grande);
			printf("il num medio è%d\n",media/n);
  return 0;
}
