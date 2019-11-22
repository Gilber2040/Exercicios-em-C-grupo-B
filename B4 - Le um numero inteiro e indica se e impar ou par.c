#include <stdio.h>
#include <stdlib.h>

main(void)
{
	int n1, divis;
	printf("Digite um numero inteiro ");
	scanf("%d",&n1);
    divis = n1 % 2;

	if (divis == 0 && n1 > 0)
    {
    printf ("O numero e par e positivo\n\n");
    } else if (divis == 0 && n1 < 0)
    {
    printf ("O numero e par e negativo\n\n");
    } else if (divis == 1 && n1 > 0)
    {
    printf ("O numero e impar e positivo\n\n");
    } else
    {
    printf ("O numero e impar e negativo\n\n");
    }
	
	system("pause");
	return 0;
}
