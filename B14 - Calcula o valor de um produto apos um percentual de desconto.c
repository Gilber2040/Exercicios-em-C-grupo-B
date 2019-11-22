#include <stdio.h>
#include <stdlib.h>
main ()
{
	float produto,percentual,desconto;
	printf ("insira o valor do produto: ");
	scanf ("%f",&produto);
    printf ("insira o percentual do desconto: ");
    scanf ("%f",&desconto);
    percentual=produto*desconto/100;
	printf ("O desconto e de : %f\n",percentual);
	printf ("O valor do produto  com o desconto  resultado e de : %f\n\n\n",produto-percentual);

	system ("pause");
	return 0;

}
