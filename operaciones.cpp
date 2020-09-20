#include <stdio.h>
#include <stdlib.h>
main()
	{
		int n1,n2,r,op;
			printf("Selecciona una opcion:\n");
			printf("1.SUMA\n2.MULTIPLICACION\n");scanf("%d",&op);
				switch(op)
				{
					case 1: printf("Inserta n1:\n");scanf("%d",&n1);
							printf("Inserta n2:\n");scanf("%d",&n2);
								r=n1+n2;
							printf("El resultado es: %d\n",r);
					break;
					case 2: printf("Inserta n1:\n");scanf("%d",&n1);
							printf("Inserta n2:\n");scanf("%d",&n2);
								r=n1*n2;
							printf("El resultado es: %d\n",r);
					break;

					default: printf("OPCION INVALIDA\n");
				}
	}
